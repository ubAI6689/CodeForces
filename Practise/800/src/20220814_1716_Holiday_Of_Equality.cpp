/*
Holiday_Of_Equality

URL:
Question:
*/
#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = n; cin >> n;
	vector<int> m;
	for (int i = 0, x; i < n && cin >> x; i++) m.push_back(x);
	sort(m.begin(), m.end());

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (m[i] < m[n-1]) sum += (m[n-1] - m[i]);
	}
	cout << sum << endl;
	return 0;
}
