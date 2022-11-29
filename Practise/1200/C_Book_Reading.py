# https://codeforces.com/problemset/problem/1213/C

def main():
    # read test cases
    t = int(input())
    for _ in range(t):
        # read n and m (n : total pages, m : divisible by)
        n, m = map(int, input().split())
        # everytime reach a page divisible by m, jot down the last digit of the page number
        # and add it to the sum
        # the sum is the answer
        # get the cycle length
        cycle = 0
        for i in range(1, m + 1):
            if (i * i) % m == 0:
                cycle = i
                break
        # get the number of cycles
        cycles = n // m // cycle
        # get the sum of the last digits of the pages in the last cycle
        last_cycle = n // m % cycle
        sum_last_digits = 0
        # for cycle less than 1, calculate the sum of the last digits
        if cycle <= 1:
            for i in range(1, n+1):
                if i % m == 0:
                    sum_last_digits += i % 10
        # for cycle greater than 1, calculate the sum of the last digits in one cycle
        # and multiply it by the number of cycles (except the last cycle)
        else:
            for i in range(1, cycle+1):
                if i % m == 0:
                    sum_last_digits += i % 10
            sum_last_digits *= cycles
            # add the sum of the last digits in the last cycle
            for i in range(1, last_cycle+1):
                if i % m == 0:
                    sum_last_digits += i % 10
                    
        ans = cycles * sum_last_digits
        # print the answer
        print(ans)
        
        
if __name__ == '__main__':
    main()
    