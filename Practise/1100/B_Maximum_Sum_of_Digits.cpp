// https://codeforces.com/problemset/problem/1060/B

#include <bits/stdc++.h>

int main()
{
    long long n; std::cin>>n;
    long long a, b;

    // get a and b where a+b=n and sum of digits of a and b is maximum

    long long m = 0; // m is the number of digits in n
	long long x = n; // x is a copy of n
	while(n)
    { // while n is not zero
		n /= 10; // divide n by 10
		m++; // increment m
	}
	m--; // m is now the number of digits in n minus 1
	long long i = 0;
	while(m--) // while m is not zero
    {
		i *= 10; // multiply i by 10
		i += 9; // add 9 to i
	}
    a = i; // a is the largest number with m digits
    b = x - i; // b is the remainder of n and a
    
    // sum every digit of a and b
    long long sum = 0;
    while(a > 0)
    {
        sum += a%10;
        a /= 10;
    }

    while(b > 0)
    {
        sum += b%10;
        b /= 10;
    }

    std::cout<<sum<<std::endl;

    return 0;
}