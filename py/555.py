l = [1, 2, 3, 4, 5, 6, 7, 10, 99, 100, 200, 300, 400, 500, 600, 700]
target = 99


def binarysearch(l, target):
    left = 0
    right = len(l) - 1
    while left <= right:
        mid = (left + right) // 2
        if l[mid] == target:
            return mid
        elif l[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

print(binarysearch(l, target))
