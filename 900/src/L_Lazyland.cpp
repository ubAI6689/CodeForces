// https://codeforces.com/problemset/problem/1089/L
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main()
{
    ll sum = 0;
    int n, k;
    std::cin >> n >> k;
    
    int array[n];
    for (int i = 0, x; i < n && std::cin >> x; i++) array[i] = x;

    ll timer[n];
    for (int i = 0, x; i < n && std::cin >> x; i++) timer[i] = x;

    int missing = 0; std::vector<int> index;

    for (int i = 1; i <= k; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[j] == i) 
            {
                count++;
                index.push_back(timer[j]);
            }
        }
        
        int size = index.size();
        if (count == 0) 
            missing++;
        else if (count == 1) 
        index.pop_back();
        else
        {
            sort(index.end()-count, index.end());
            index.pop_back();      
        }
    }

    sort(index.begin(),index.end());
    // std::cout << missing << std::endl;
    for (int i = 0; i < missing; i++) {sum += index[i];}

    std::cout << sum;
    return 0;
}