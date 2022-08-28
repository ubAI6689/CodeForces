/*
Hit_Lottery

URL: https://codeforces.com/problemset/problem/996/A
Question: Allen has a LOT of money. He has n dollars in the bank. 
For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). 
The denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number of bills 
Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n (1≤n≤109).

Output
Output the minimum number of bills that Allen could receive.
*/
#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
	ll n;	cin >> n;
	ll count = 0;

	while(n!=0)
	{
		if (n >= 100)
		{
			if (n % 100 == 0) 
			{
				count = n/100;
				n -= n;
			}
			else 
			{
				count = n/100;
				n = n%100;
			}
		}
		else if (n >= 20){n-=20; count++;}
		else if (n >= 10){n-=10; count++;}
		else if (n >= 5){n-=5; count++;}
		else if (n >= 1){n-=1; count++;}
	}
	cout << count << endl;
	return 0;
}
