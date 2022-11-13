# // A non-empty digit string is diverse if the number of occurrences of each character in it 
# // doesn't exceed the number of distinct characters in it.

# // write a program to find the number of diverse substrings of a given string.
# only take into account of substring with length <= 100

# read input for test cases
T = int(input())

# function to get substring with length <= 100
def get_substrings(string):
    # get length of string
    length = len(string)
    # create a list to store all substring
    substring_list = []
    # loop through string
    for i in range(length):
        # loop through string again
        for j in range(i, length):
            # get substring
            substring = string[i:j+1]
            # check if length of substring <= 100
            if len(substring) <= 100:
                # append substring to list
                substring_list.append(substring)
    # return list
    return substring_list

# # write a function to get all substrings of a string
# def get_substrings(string):
#     length = len(string)
#     return [string[i:j+1] for i in range(length) for j in range(i,length)]

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
