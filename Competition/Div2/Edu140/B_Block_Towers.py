# function that read list of integers and return the maximum number of blocks

def max_blocks(n, a):
    # Initialize the maximum number of blocks as the number of blocks in the first tower
    max_blocks = a[0]

    # Iterate through the towers, starting from the second one
    for i in range(1, n):
        # If the number of blocks in the current tower is greater than the number of blocks in the first tower,
        # move blocks from the current tower to the first tower until they have the same number of blocks
        while a[i] > a[0]:
            a[0] += 1
            a[i] -= 1

        # Update the maximum number of blocks with the current number of blocks in the first tower
        max_blocks = max(max_blocks, a[0])

    # Return the maximum number of blocks
    return max_blocks


# def max_blocks(n: int, a: ) -> int:
#     # Initialize the maximum number of blocks as the number of blocks in the first tower
#     max_blocks = a[0]

#     # Iterate through the towers, starting from the second one
#     for i in range(1, n):
#         # If the number of blocks in the current tower is greater than the number of blocks in the first tower,
#         # move blocks from the current tower to the first tower until they have the same number of blocks
#         while a[i] > a[0]:
#             a[0] += 1
#             a[i] -= 1

#         # Update the maximum number of blocks with the current number of blocks in the first tower
#         max_blocks = max(max_blocks, a[0])

#     # Return the maximum number of blocks
#     return max_blocks

# main
if __name__ == "__main__":
    # read test cases
    t = int(input())

    # iterate through test cases
    for _ in range(t):
        # read number of towers
        n = int(input())

        # read number of blocks in each tower
        a = list(map(int, input().split()))

        # print maximum number of blocks
        print(max_blocks(n, a))




