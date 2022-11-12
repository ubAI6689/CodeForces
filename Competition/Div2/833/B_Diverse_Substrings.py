# // A non-empty digit string is diverse if the number of occurrences of each character in it 
# // doesn't exceed the number of distinct characters in it.

# // write a program to find the number of diverse substrings of a given string.

# read input for test cases
T = int(input())

# write a function to get all substrings of a string
def get_substrings(string):
    length = len(string)
    return [string[i:j+1] for i in range(length) for j in range(i,length)]

# write a function to check if a string is diverse
def is_diverse(string):
    # get the number of distinct characters in the string
    distinct_chars = len(set(string))
    # get the number of occurrences of each character in the string
    char_count = {char:string.count(char) for char in string}
    # check if the number of occurrences of each character in the string is less than or equal to the number of distinct characters in the string
    return all([char_count[char] <= distinct_chars for char in string])

# write a function to get the number of diverse substrings of a string
def get_diverse_substrings(string):
    # get all substrings of the string
    substrings = get_substrings(string)
    # get the number of diverse substrings
    return len([substring for substring in substrings if is_diverse(substring)])

# iterate over test cases
for i in range(T):
    # read input for n
    n = int(input())
    # read input for string with length n
    string = input()
    # get the number of diverse substrings of the string
    result = get_diverse_substrings(string)
    # print the result
    print(result)
