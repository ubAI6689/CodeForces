// https://codeforces.com/problemset/problem/9/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x , y;
    cin >> x >> y;
    int max = std::max(x, y);

         if (max == 1) cout << "1/1" << endl;
    else if (max == 2) cout << "5/6" << endl;
    else if (max == 3) cout << "2/3" << endl;
    else if (max == 4) cout << "1/2" << endl;
    else if (max == 5) cout << "1/3" << endl;
    else if (max == 6) cout << "1/6" << endl;

    return 0;
}