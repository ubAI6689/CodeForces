/*
Easy_Problem

URL: https://codeforces.com/problemset/problem/1030/A
Question: When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. 
This time the coordinator had chosen some problem and asked n people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these n people has answered that the problem is hard, the coordinator decides to change the problem. 
For the given responses, check if the problem is easy enough.

Input
The first line contains a single integer n (1≤n≤100) — the number of people who were asked to give their opinions.

The second line contains n integers, each integer is either 0 or 1. If i-th integer is 0, then i-th person thinks 
that the problem is easy; if it is 1, then i-th person thinks that the problem is hard.

Output
Print one word: "EASY" if the problem is easy according to all responses, or "HARD" if there is at least one person
 who thinks the problem is hard.

You may print every letter in any register: "EASY", "easy", "EaSY" and "eAsY" all will be processed correctly.
*/
#include <iostream>
using namespace std;

int main()
{
    int r; 
    cin >> r;

    int a[100];
    
    bool easy = true;
    for (int i = 0; i < r; i++)
    {
        cin >> a[i];
        if (a[i] == 1) 
        {
            cout << "HARD" << endl;
            easy = false;
            break;
        }
    }
    if (easy) cout << "EASY" << endl;
    return 0;
}
