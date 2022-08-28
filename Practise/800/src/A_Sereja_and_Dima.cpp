// https://codeforces.com/problemset/problem/381/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> num;
    for (int i = 0, x; i < n && cin >> x; i++) num.push_back(x);
    
    int N = n;
    int sereja = 0; int dima = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) // sereja's move
        {
            if (num[0] > num[N - 1])
            {
                sereja += num[0];
                num.erase(num.begin());
                N--;
            }
            else
            {
                sereja += num[N-1];
                num.erase(num.begin() + N -1);
                N--;
            }
        }

        else if (i % 2 != 0) // dima's turn
        {
            if (num[0] > num[N - 1])
            {
                dima += num[0];
                num.erase(num.begin());
                N--;
            }
            else
            {
                dima += num[N-1];
                num.erase(num.begin() + N - 1);
                N--;
            }
        }
    }
    cout << sereja << ' ' << dima << endl;
    return 0;
}