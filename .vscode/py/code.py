# อ่านกริด 5x5
grid = [input().split() for _ in range(5)]

# หาตำแหน่งของ 'o'
for i in range(5):
    for j in range(5):
        if grid[i][j] == 'o':
            x, y = i, j

# ทิศทาง
moves = {
    'U': (-1, 0),
    'D': (1, 0),
    'L': (0, -1),
    'R': (0, 1)
}

while True:
    try:
        cmd = input().strip()
    except EOFError:
        break

    if cmd == '-1':
        print("Stop")
        break

    if cmd not in moves:
        continue

    dx, dy = moves[cmd]
    nx, ny = x + dx, y + dy

    if not (0 <= nx < 5 and 0 <= ny < 5):
        print("Not in Area!!!")
        break

    # ย้าย 'o'
    grid[x][y] = 'x'
    grid[nx][ny] = 'o'
    x, y = nx, ny

    # แสดงกริดแบบจัดรูปแบบชัดเจน
    for row in grid:
        print(' '.join(row))
    print()