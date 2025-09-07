h, m = map(int, input().split('.'))
t = h* 60 + m
n = int(input())
arr = []
for i in range(n):
    x = list(map(str, input().split(' <|> ')))
    addm = 0
    addname = ""
    addque = ""
    for j in x:
        j = j.strip()
        if "Queue#" not in j and '.' in j:
            time_parts = j.split('.')
            if len(time_parts) == 2 and time_parts[0].isdigit() and time_parts[1].isdigit():
                hh, mm = map(int, time_parts)
                addm = hh * 60 + mm
        elif  "Queue#" not in j and '.' not in j:
            addname = j
        elif  "Queue#" in j:
            addque = j
    arr.append((addque, addname, addm))
bo = True
arr = sorted(arr)
total = 0
for i in arr:
    total += i[2]
left = t % total
while(bo):
    for i in range(len(arr)):
        left -= float(arr[i][2])
        if left == 0:
            print(f"Song Order: {arr[i][0][6::]}")
            print(f"Song Name: {arr[i][1]}")
            print("Song Process: Complete")
            bo = False
            break
        if left < 0:
            left += float(arr[i][2])
            print(f"Song Order: {arr[i][0][6::]}")
            print(f"Song Name: {arr[i][1]}")
            print(f"Song Process: {max(int(left/float(arr[i][2]) * 100), 1)}%")
            bo = False
            break