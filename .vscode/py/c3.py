from collections import deque

def min_jumps(s):
    start = s.index('^')
    goal = s.index('|')
    n = len(s)

    visited = [False] * n
    queue = deque()

    queue.append((start + 1, 1))
    visited[start + 1] = True

    # ตำแหน่งไกลสุดที่เคยเหยียบได้ (ฟองสบู่เท่านั้น)
    max_reachable = start + 1 if s[start + 1] in 'oO' else start

    while queue:
        pos, jumps = queue.popleft()

        if pos >= goal:
            print("POSSIBLE")
            print(jumps)
            return

        if s[pos] == 'o':
            step = 1
        elif s[pos] == 'O':
            step = 3
        else:
            continue

        for i in range(1, step + 1):
            new_pos = pos + i
            if new_pos < n and not visited[new_pos] and s[new_pos] in 'oO|':
                visited[new_pos] = True
                queue.append((new_pos, jumps + 1))
                if s[new_pos] in 'oO':
                    max_reachable = max(max_reachable, new_pos)

    # ถ้าไปไม่ถึง | ก็แสดงว่า IMPOSSIBLE
    remaining = goal - max_reachable
    print("IMPOSSIBLE")
    print(remaining)
min_jumps(input().strip())