#include <iostream>
typedef long long ll;

ll findGCD(ll n1, ll n2)
{
    ll gcd;
    if (n2 > n1) 
    {   
        ll temp = n2;
        n2 = n1;
        n1 = temp;
    }
    
    for (ll i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) 
        {
            gcd = i;
        }
    }
    return gcd;
}

ll findLCM(ll n1, ll n2)
{
    ll hcf, temp, lcm;
    hcf = n1; temp = n2;

    while (hcf != temp)
    {
        if (hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }
    lcm = (n1*n2/hcf);
    return lcm;
}

void solve(ll n)
{
    ll count = 0;
    ll array_1[n]; ll array_2[n];
    for (ll i = 1; i <= n; i++)
    {
        array_1[i] = i;
        array_2[i] = i;
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
            if (findLCM(array_1[i], array_2[j])/findGCD(array_1[i], array_2[j]) <= 3)
                count++;
    }
    std::cout<<count;
}

int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        ll n; std::cin>>n;
        solve(n);
        std::cout<<'\n';
    }
    return 0;
}