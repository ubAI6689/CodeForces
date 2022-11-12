# score of an array is the sum of its subarray that equal to zero

# input for test cases
T = int(input())

# function to get subarrays
def get_subarrays(array):
    length = len(array)
    return [array[i:j+1] for i in range(length) for j in range(i,length)]

# write a function to get the score of an array
def get_score(array):
    # get all subarrays of the array
    subarrays = get_subarrays(array)
    # get the score of the array
    return sum([sum(subarray) == 0 for subarray in subarrays])

# iterate over test cases
for i in range(T):
    # read input for n
    n = int(input())
    # read input for array with length n
    array = [int(x) for x in input().split()]
    # get the score of the array
    result = get_score(array)
    # print the result
    print(result)