// https://codeforces.com/problemset/problem/1033/B

#include <bits/stdc++.h>

// function to check if a number is prime
bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    int t; std::cin>>t; // number of test cases
    while(t--)
    {
        long long a, b;
        std::cin>>a>>b; // two numbers

        // a^2 - b^2 = (a+b)(a-b) is prime if and only if a-b == 1 && a+b is prime
        std::cout<<((a-b==1 && isPrime(a+b))?"YES":"NO")<<std::endl;
    }
    return 0;
}
