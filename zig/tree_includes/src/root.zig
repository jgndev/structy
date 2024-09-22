const std = @import("std");
const testing = std.testing;
const Allocator = std.mem.Allocator;

// Node structure
const Node = struct {
    val: []const u8,
    left: ?*Node,
    right: ?*Node,

    // Constructor for Node
    fn init(allocator: Allocator, val: []const u8) !*Node {
        const node = try allocator.create(Node);
        node.* = .{
            .val = try allocator.dupe(u8, val),
            .left = null,
            .right = null,
        };
        return node;
    }

    // Destructor for Node
    fn deinit(self: *Node, allocator: Allocator) void {
        allocator.free(self.val);
        if (self.left) |left| left.deinit(allocator);
        if (self.right) |right| right.deinit(allocator);
        allocator.destroy(self);
    }
};

fn treeIncludes(root: ?*Node, target: []const u8) !bool {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    var stack = std.ArrayList(*Node).init(arena.allocator());

    if (root) |node| {
        try stack.append(node);
    } else {
        return false;
    }

    while (stack.items.len > 0) {
        const current = stack.pop();
        if (std.mem.eql(u8, current.val, target)) {
            return true;
        }

        if (current.right) |right| {
            try stack.append(right);
        }

        if (current.left) |left| {
            try stack.append(left);
        }
    }

    return false;
}

// Tests
test "treeIncludes" {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    // Test tree:
    //      a
    //    /   \
    //   b     c
    //  / \     \
    // d   e     f
    var root = try Node.init(allocator, "a");
    root.left = try Node.init(allocator, "b");
    root.right = try Node.init(allocator, "c");
    root.left.?.left = try Node.init(allocator, "d");
    root.left.?.right = try Node.init(allocator, "e");
    root.right.?.right = try Node.init(allocator, "f");

    // Test cases
    try testing.expect(try treeIncludes(root, "a"));
    try testing.expect(try treeIncludes(root, "e"));
    try testing.expect(try treeIncludes(root, "f"));
    try testing.expect(!try treeIncludes(root, "g"));
    try testing.expect(!try treeIncludes(root, "h"));
    try testing.expect(!try treeIncludes(null, "a"));

    // No need to manually free the nodes, the ArenaAllocator will handle it
}
