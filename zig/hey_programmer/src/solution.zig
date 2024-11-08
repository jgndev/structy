const std = @import("std");
const testing = std.testing;
const Allocator = std.mem.Allocator;

pub fn greet(allocator: Allocator, s: []const u8) ![]u8 {
    return try std.fmt.allocPrint(allocator, "hey {s}", .{s});
}

test "greet generates expected greetings" {
    const allocator = testing.allocator;


    std.debug.print("Running test cases:\n", .{});

    const test_cases = .{
        .{
            .name = "test case one",
            .input = "alvin",
            .want = "hey alvin",
        },
        .{
            .name = "test case two",
            .input = "programmer",
            .want = "hey programmer",
        },
        .{
            .name = "test case three",
            .input = "jason",
            .want = "hey jason",
        },
        .{
            .name = "test case four",
            .input = "how now brown cow",
            .want = "hey how now brown cow",
        },
    };

    inline for (test_cases) |tc| {
        {
            const result = try greet(allocator, tc.input);
            defer allocator.free(result);
            try testing.expectEqualStrings(tc.want, result);
            std.debug.print("\nPassed: {s}", .{tc.name});
        }
    }

    std.debug.print("\n", .{});
}