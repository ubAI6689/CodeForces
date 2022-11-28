# /// choose integer x and y from the array such that x>y and x-y is not present in the array.
# /// append x-y to the array and repeat the process until no such x and y can be found.
# /// print the length of the array after the process is complete.
# minimum length of the array is 2

if __name__ == '__main__':
    # read test cases
    t = int(input())
    for _ in range(t):
        # read array length
        n = int(input())
        # read array
        arr = list(map(int, input().split()))
        # sort array
        arr.sort()
        
        # start from the biggest number and subsctract with each number in the array
        # if the result is not in the array, append it to the array
        # repeat the process with the next biggest number
        # stop when there is no number in the array that can be subtracted with the biggest number
        for i in range(n-1, 0, -1):
            for j in range(i-1, -1, -1):
                if arr[i]-arr[j] not in arr:
                    arr.append(arr[i]-arr[j])
                    arr.sort()
                    # reset loop
                    i = n
        # print the length of the array
        print(len(arr))



