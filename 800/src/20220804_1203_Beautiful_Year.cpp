/*
Beautiful_Year

URL: https://codeforces.com/problemset/problem/271/A
Question: It seems like the year of 2013 came only yesterday. Do you know a curious fact? 
The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum
 year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all 
it's digits are distinct. It is guaranteed that the answer exists.
*/
#include <iostream>
#include <cstring>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

// function to count number of unique characters in string
int countDistinct(string str)
{
    // use unordered set to store unique characters
    unordered_set<char> s;

    for (int i =0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }

    return s.size();
}

int main()
{
    int num;
    cin >> num;
    num++;
    string str = to_string(num);

    while (countDistinct(str) != 4)
    {
        num++;
        str = to_string(num);
    }

    cout << str << endl;
    return 0;
}

