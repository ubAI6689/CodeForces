/*
Spy_Detected

URL:
Question:
*/
#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

int main()
{	
	int n; cin >> n;
	while(n--)
	{
		int m; cin >> m;
		vector<int> spy;
		for (int i = 0, x; i < m && cin >> x; i++) spy.push_back(x);
		for (int i = 0; i < m; i++)
		{
			if (spy[i] != spy[i+1])
			{	
				if (i+1 == m-1) { cout << i+1+1 << endl; break; }
				
				if ( spy[i] == spy[i+2]) cout << i+1+1 << endl;
				else cout << i+1 << endl;
				break;
			}
		}
	}
	return 0;
}