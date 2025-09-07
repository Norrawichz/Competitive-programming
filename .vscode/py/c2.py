def calculate_structure_cost(N, M, K, C, strengths, earthquakes):
    destroyed_each_round = []
    for quake in earthquakes:
        destroyed = 0
        for i in range(N):
            if strengths[i] <= 0:
                continue  # Already destroyed
            if quake > strengths[i]:
                strengths[i] = 0
                destroyed += 1
            else:
                strengths[i] -= K
                if strengths[i] <= 0:
                    strengths[i] = 0
        destroyed_each_round.append(destroyed)

    # Find LIS (Longest Increasing Subsequence)
    def LIS(arr):
        import bisect
        lis = []
        for num in arr:
            idx = bisect.bisect_right(lis, num)
            if idx == len(lis):
                lis.append(num)
            else:
                lis[idx] = num
        return len(lis)

    decay = LIS(destroyed_each_round)
    return decay * C

# รับค่า Input
N, M, K, C = map(int, input().split())
strengths = list(map(int, input().split()))
earthquakes = [int(input()) for _ in range(M)]

# แสดงผลลัพธ์
print(calculate_structure_cost(N, M, K, C, strengths, earthquakes))
