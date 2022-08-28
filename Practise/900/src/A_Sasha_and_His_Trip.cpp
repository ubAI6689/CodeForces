// https://codeforces.com/problemset/problem/1113/A
#include <iostream>
using namespace std;

void solve(int n, int v)
{
    int distance = n - 1;
    int cost = 0;
    
    cost = min(v, distance);
    v = min(v, distance);
    
    int city = 1;
    while(distance--)
    {
        v--; // use 1 liter of fuel
        if (v >= distance) break; // check if the fuel enough or not
        city++; cost += city; // if not, fill 1 liter at current town
        v++;
    }
    cout << cost << endl;
}

int main()
{
    int n, v;
    cin >> n >> v;
    solve(n, v);
    return 0;
}