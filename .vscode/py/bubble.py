from collections import deque

def min_jumps_to_goal(map_str, jumps_str):
    area = list(map_str)
    jumps = list(map(int, jumps_str.strip().split()))

    start = area.index('^')
    goal = area.index('|')
    n = len(area)

    visited = [False] * n
    queue = deque()

    # เริ่มจาก start + 1 (เพราะ ^ ไม่สามารถยืนอยู่ได้)
    init_pos = start + 1
    if init_pos >= n or area[init_pos] not in ['o', '|']:
        return -1

    queue.append((init_pos, 1))
    visited[init_pos] = True

    while queue:
        pos, steps = queue.popleft()

        if pos == goal:
            return steps

        for jump in jumps:
            next_pos = pos + jump
            if 0 <= next_pos < n and not visited[next_pos] and area[next_pos] in ['o', '|']:
                visited[next_pos] = True
                queue.append((next_pos, steps + 1))

    return -1

map_str = input().strip()
jumps_str = input().strip()
result = min_jumps_to_goal(map_str, jumps_str)
print(result)  # Expected: 6
