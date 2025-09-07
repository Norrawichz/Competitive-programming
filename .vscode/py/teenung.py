def count_meeting_segments(n, path1, path2):
    count = 0
    for i in range(n):
        a1, b1 = path1[i], path1[(i + 1) % n]
        a2, b2 = path2[i], path2[(i + 1) % n]
        if a1 == b2 and b1 == a2:
            count += 1
    return count

# Input
n = int(input())
path1 = list(map(int, input().split()))
path2 = list(map(int, input().split()))

# Output
print(count_meeting_segments(n, path1, path2))
# Expected: 2
# Explanation: The two paths meet at 2 segments.