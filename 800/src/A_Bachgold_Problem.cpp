// https://codeforces.com/problemset/problem/749/A
#include <iostream>
using namespace std;

int main()
{
    int num; cin >> num;
    if (num % 2 == 0)
    {
        cout << num / 2 << endl;
        for (int i = 0; i < num/2; i++) cout << 2 << ' ';
    }
    else
    {
        cout << num / 2 << endl;
        for (int i = 0; i < num/2; i++)
        {
            if (i == num/2 - 1)
            {
                cout << 3 << endl;
                break;
            }
            cout << 2 << ' ';
        }
    }
}