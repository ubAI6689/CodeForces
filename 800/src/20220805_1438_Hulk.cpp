/*
Hulk

URL: https://codeforces.com/problemset/problem/705/A
Question: Dr. Bruce Banner hates his enemies (like others don't). As we all know, 
he can barely talk when he turns into the incredible Hulk. That's why he asked you 
to help him to express his feelings.

Hulk likes the Inception so much, and like that his feelings are complicated. 
They have n layers. The first layer is hate, second one is love, third one is hate and so on...

For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", 
and if n = 3 it's "I hate that I love that I hate it" and so on.

Please help Dr. Banner.

Input
The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.

Output
Print Dr.Banner's feeling in one line.

*/ 
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string s1 = "I love ";
    string s2 = "I hate ";
    string s3 = "that ";
    string s4 = "it ";

    for (int i = 0; i < num; i++)
    {
        if (i % 2 != 0) cout << s1;
        else cout << s2;

        if (i != num -1) cout << s3;
        else cout << s4; 
    }
    return 0;
}
