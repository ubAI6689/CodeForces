/*
Required_Remainder

URL:
Question:
*/
#include <iostream>
//#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{	
	int t; cin >> t;
	while(t--)
	{
		ll x, y, n;
		cin >> x >> y >> n;
		if (n%x == y) cout << n << endl;
		else if (n%x > y) cout << n - (n%x - y) << endl;
		else cout << n - (n%x + x - y) << endl;
	}
	return 0;
}
