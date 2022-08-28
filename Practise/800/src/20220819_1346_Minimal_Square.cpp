/*
Minimal_Square

URL:
Question:
*/
#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		vector<int> rectangle;
		for (int i = 0, x; i < 2 && cin >> x; i++) rectangle.push_back(x);
		sort(rectangle.begin(), rectangle.end());

		int min_L = rectangle[0]*2;
		if (min_L >= rectangle[1]) cout << min_L*min_L << endl;
		else cout << rectangle[1]*rectangle[1] << endl;

		// int min_L = 0;
		// if (a < b)
		// {
		// 	min_L = a+a;
		// 	if (min_L >= b) cout << min_L*min_L << endl;
		// 	else cout << b*b << endl;
		// }
	}
	return 0;
}
