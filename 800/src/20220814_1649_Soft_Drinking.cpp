/*
Soft_Drinking

URL:
Question:
*/
#include <iostream>
//#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{	
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int drink = k*l;
	int limes = c*d;

	vector<int> m = { (drink/nl)/n, limes/n, (p/np)/n };
	sort(m.begin(), m.end());
	cout << m[0] << endl;
	return 0;
}