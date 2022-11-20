#include<iostream>
using namespace std;
int n,m;
int x,a,b;
int main()
{
	cin>>n>>m;
	while(n--)
    {
		cin>>a>>b;
		if(x>=a)x=max(x,b);
	}
	if(x>=m)printf("YES");
	else printf("NO");
	return 0;
}