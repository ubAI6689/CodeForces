/*
Team_Olympiad

URL: 
Question:
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;  

int main()
{   
	int n; cin >> n;
	map<int, int> child;
	for (int i = 1, x; i <= n && cin >> x; i++) child[i] = x; 
	
	vector<int> one; vector<int> two; vector<int> three;
	for (auto skill :child)
	{
		if (skill.second == 1) one.push_back(skill.first);
		else if (skill.second == 2) two.push_back(skill.first);
		else if (skill.second == 3) three.push_back(skill.first);
	}
	
	vector<int> num_skill{ one.size(), two.size(), three.size() };
	sort(num_skill.begin(), num_skill.end());

	if (num_skill == 0) cout << 0 << endl;
	else 
	{
		cout << num_skill[0];
		for (int i = 0; i < num_skill[0]; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << one[i] << ' ' << two[i] << ' ' << three[i] << endl;
			}
		}
	}
	return 0;
}
