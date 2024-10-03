const std = @import("std");
const ArrayList = std.ArrayList;
const Allocator = std.mem.Allocator;

const Node = struct {
    val: []const u8,
    left: ?*Node,
    right: ?*Node,

    fn init(allocator: Allocator, val: []const u8) !*Node {
        const node = try allocator.create(Node);
        node.* = .{
            .val = val,
            .left = null,
            .right = null,
        };

        return node;
    }
};

fn bottomRightValue(allocator: Allocator, root: ?*Node) !?[]const u8 {
    if (root == null) {
        return null;
    }

    var queue = ArrayList(?*Node).init(allocator);
    defer queue.deinit();

    try queue.append(root);
    var curr: ?*Node = null;

    while (queue.items.len > 0) {
        curr = queue.orderedRemove(0);

        if (curr) |node| {
            if (node.left) |left| {
                try queue.append(left);
            }

            if (node.right) |right| {
                try queue.append(right);
            }
        }
    }

    return if (curr) |node| node.val else null;
}

test "test case one" {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    var a = try Node.init(allocator, "3");
    var b = try Node.init(allocator, "11");
    var c = try Node.init(allocator, "10");
    const d = try Node.init(allocator, "4");
    const e = try Node.init(allocator, "-2");
    const f = try Node.init(allocator, "1");

    a.left = b;
    a.right = c;
    b.left = d;
    b.right = e;
    c.right = f;

    const result = try bottomRightValue(allocator, a);
    const expected = "1";

    try std.testing.expectEqualStrings(expected, result.?);
}

test "test case two" {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    var a = try Node.init(allocator, "-1");
    var b = try Node.init(allocator, "-6");
    var c = try Node.init(allocator, "-5");
    const d = try Node.init(allocator, "-3");
    const e = try Node.init(allocator, "-4");
    const f = try Node.init(allocator, "-13");
    const g = try Node.init(allocator, "-2");
    const h = try Node.init(allocator, "6");

    a.left = b;
    a.right = c;
    b.left = d;
    b.right = e;
    c.right = f;
    e.left = g;
    e.right = h;

    const result = try bottomRightValue(allocator, a);
    const expected = "6";

    try std.testing.expectEqualStrings(expected, result.?);
}

test "test case three" {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    var a = try Node.init(allocator, "-1");
    var b = try Node.init(allocator, "-6");
    var c = try Node.init(allocator, "-5");
    const d = try Node.init(allocator, "-3");
    const e = try Node.init(allocator, "-4");
    const f = try Node.init(allocator, "-13");
    const g = try Node.init(allocator, "-2");
    const h = try Node.init(allocator, "6");
    const i = try Node.init(allocator, "7");

    a.left = b;
    a.right = c;
    b.left = d;
    b.right = e;
    c.right = f;
    e.left = g;
    e.right = h;
    f.left = i;

    const result = try bottomRightValue(allocator, a);
    const expected = "7";

    try std.testing.expectEqualStrings(expected, result.?);
}

test "test case four" {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    var a = try Node.init(allocator, "a");
    var b = try Node.init(allocator, "b");
    const c = try Node.init(allocator, "c");
    const d = try Node.init(allocator, "d");
    const e = try Node.init(allocator, "e");
    const f = try Node.init(allocator, "f");

    a.left = b;
    a.right = c;
    b.right = d;
    d.left = e;
    e.right = f;

    const result = try bottomRightValue(allocator, a);
    const expected = "f";

    try std.testing.expectEqualStrings(expected, result.?);
}

test "test case five" {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    const a = try Node.init(allocator, "42");

    const result = try bottomRightValue(allocator, a);
    const expected = "42";

    try std.testing.expectEqualStrings(expected, result.?);
}