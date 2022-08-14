#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a;
        for (int i = 0, x; i < n && cin >> x; i++)
            a.push_back(x);

        vector<int> b;
        for (int i = 0, x; i < n && cin >> x; i++)
            b.push_back(x);

        for (int i = 0; i < k; i++)
        {

            sort(a.begin(), a.end());                 // sort ascending
            sort(b.begin(), b.end(), greater<int>()); // sort descending

            if (a[0] < b[0])
            {
                int temp = a[0];
                a[0] = b[0];
                b[0] = temp;
            }
        }

        int sum = 0;
        for (auto number : a)
        {
            sum += number;
        }
        cout << sum << endl;
    }
    return 0;
}