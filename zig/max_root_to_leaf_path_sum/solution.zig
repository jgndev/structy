const std = @import("std");

// Node struct
const Node = struct {
    val: i32,
    left: ?*Node,
    right: ?*Node,

    // Construtor
    pub fn init(val: i32) Node {
        return .{
            .val = val,
            .left = null,
            .right = null,
        };
    }
};

// Recursive DFS helper function
fn dfs(node: ?*const Node) i32 {
    if (node == null) {
        return std.math.minInt(i32);
    }

    const n = node.?;

    if (n.left == null and n.right == null) {
        return n.val;
    }

    const leftMax = dfs(n.left);
    const rightMax = dfs(n.right);

    return @max(leftMax, rightMax) + n.val;
}

// Main function to find max path sum
pub fn maxPathSum(root: ?*const Node) i32 {
    return dfs(root);
}

// Tests
test "test case one" {
    var a = Node.init(3);
    var b = Node.init(11);
    var c = Node.init(4);
    var d = Node.init(4);
    var e = Node.init(-2);
    var f = Node.init(1);

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    const result = maxPathSum(&a);
    const expected = 18;

    try std.testing.expectEqual(result, expected);
}

test "test case two" {
    var a = Node.init(5);
    var b = Node.init(11);
    var c = Node.init(54);
    var d = Node.init(20);
    var e = Node.init(15);
    var f = Node.init(1);
    var g = Node.init(3);

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    e.left = &f;
    e.right = &g;

    const result = maxPathSum(&a);
    const expected = 59;

    try std.testing.expectEqual(result, expected);
}

test "test case three" {
    var a = Node.init(-1);
    var b = Node.init(-6);
    var c = Node.init(-5);
    var d = Node.init(-3);
    var e = Node.init(0);
    var f = Node.init(-13);
    var g = Node.init(-1);
    var h = Node.init(-2);

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;
    e.left = &g;
    f.right = &h;

    const result = maxPathSum(&a);
    const expected = -8;

    try std.testing.expectEqual(result, expected);
}

test "test case four" {
    var a = Node.init(42);

    const result = maxPathSum(&a);
    const expected = 42;

    try std.testing.expectEqual(result, expected);
}