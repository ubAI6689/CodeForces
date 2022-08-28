/*
AntonLetter

URL: https://codeforces.com/problemset/problem/443/A
Question: Recently, Anton has found a set. The set consists of small English letters. 
Anton carefully wrote out all the letters from the set in one line, separated by a comma.
He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again. 
He asks you to count the total number of distinct letters in his set.

Input
The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. 
It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved 
bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

Output
Print a single number — the number of distinct letters in Anton's set.
*/
#include <iostream>
#include <set>
#include <bits/stdc++.h>

using namespace std;

#define MAX_LEN 1000

int main()
{
    char s[MAX_LEN];
    set<char> str;
    int i = 0;
    while (true)
    {
        cin >> s[i]; 
        if ((s[i] != '{') && (s[i] != ',') && (s[i] != '}')) str.insert(s[i]);
        i++;
        if (cin.peek() == '\n') break;
    }
    cout << str.size() << endl;
    return 0;
}
