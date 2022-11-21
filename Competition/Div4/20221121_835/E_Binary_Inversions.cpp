#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
    {
        int n; cin >> n;
        // vector of binary numbers
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        
        // find the original number of inversions
        int inversions = 0;
        for (int i = 0; i < n; ++i)
            for (int j = i+1; j < n; ++j)
                if (v[i] > v[j])
                    ++inversions;

        // find the max number of inversions after flipping the bits one by one
        int max_inversions = 0;
        int inversions_after_flipping = 0;
        for (int i = 0; i < n; ++i)
        {
            v[i] = 1 - v[i];
            for (int j = i+1; j < n; ++j)
                if (v[i] > v[j])
                    ++inversions_after_flipping;
            max_inversions = max(max_inversions, inversions_after_flipping);
            v[i] = 1 - v[i];
        }
        cout << inversions << " " << max_inversions << endl;
        cout << max(inversions, max_inversions) << endl;
        
    }
    return 0;
}