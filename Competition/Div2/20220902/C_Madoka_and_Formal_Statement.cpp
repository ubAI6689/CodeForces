#include <iostream>
typedef long long ll;
int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        int n; std::cin>>n;

        ll arr1[n]; 
        for (int i = 0; i < n; i++) {std::cin>>arr1[i];}

        ll arr2[n];
        for (int i = 0; i < n; i++) {std::cin>>arr2[i];}

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
            {
                if (arr1[i] > arr1[i+1] || arr1[i] > arr2[i]) {std::cout<<"NO\n"; continue;}
                else arr1[i]++;
            }
            else if (i == n - 1)
            {
                if (arr1[n - 1] > arr1[0]) {std::cout<<"NO\n"; continue;}
                else arr1[i]++;
            }

        }
    //     if (count == n) {std::cout<<"YES\n"; continue;}
    }
    return 0;
}