def can_paint(n, m, k, a):
    # Sort the array of colors in decreasing order
    a.sort(reverse=True)

    # Check if any of the colors is used more than k times
    # If any color is used more than k times, return False
    for i in range(m):
        if a[i] > k:
            return False

    # Calculate the number of blocks of k consecutive cells
    blocks = (n + k - 1) // k

    # Check if there are enough colors to paint all blocks
    # If there are not enough colors, return False
    if m < blocks:
        return False

    # If the code reaches this point, it means that it is possible
    # to paint the cells according to the given conditions, so return True
    return True

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Read the input for the test case
    n, m, k = map(int, input().split())
    a = list(map(int, input().split()))

    # Check if it is possible to paint the cells according to the given conditions
    if can_paint(n, m, k, a):
        print("YES")
    else:
        print("NO")
