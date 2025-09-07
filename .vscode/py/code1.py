def solve(num, weights, k):
    n = len(num)
    
    # Stack to store the indices of the numbers we keep
    stack = []
    to_remove = k
    
    # Process each character in num
    for i in range(n):
        while stack and to_remove > 0 and num[stack[-1]] > num[i]:
            stack.pop()
            to_remove -= 1
        stack.append(i)
    
    # We may have not removed k digits, so remove from the end
    stack = stack[:n-k]

    # Collect the remaining digits
    result = ''.join(num[i] for i in stack)
    
    # Calculate the sum of the remaining weights
    remaining_weights = sum(weights[i] for i in stack)
    
    # Determine the positions of the removed digits
    removed_positions = set(range(n)) - set(stack)
    removed_positions = sorted(removed_positions)

    # Output the result
    print(result)
    print(remaining_weights)
    print(removed_positions)

# Input parsing
num = input().strip()
weights = list(map(int, input().split()))
k = int(input().strip())

solve(num, weights, k)