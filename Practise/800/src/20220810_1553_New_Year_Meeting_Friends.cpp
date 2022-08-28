/*
New_Year_Meeting_Friends

URL: https://codeforces.com/problemset/problem/723/A
Question: There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x1, the second friend lives at the point x2, and the third friend lives at the point x3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

Input
The first line of the input contains three distinct integers x1, x2 and x3 (1 ≤ x1, x2, x3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> line;
	for (int i, x; i < 3 && cin >> x; i++) line.push_back(x);
	sort(line.begin(),line.end());
	cout << line[1]-line[0]+line[2]-line[1]<<endl;
	return 0;
}
