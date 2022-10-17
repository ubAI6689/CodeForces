#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int array[n];
        for (int i=0; i<n; i++)
        {
            cin>>array[i];
        }
        cout<<(10-n)*(10-n-1)*3<<'\n';
    }
    return 0;
}