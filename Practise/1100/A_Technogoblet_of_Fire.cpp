#include <iostream>
#include <vector>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> power;
    vector<int> school_id;
    
    for (int i=0, x; i<n&&cin>>x; i++)
        power.push_back(x);
    for (int i=0, x; i<n&&cin>>x; i++)
        school_id.push_back(x);

    map<int, vector<int>> chosen_one;
    for (int i=0, x; i<k&&cin>>x; i++)
        chosen_one[school_id[x-1]].push_back(power[x-1]);

    map<int, vector<int>> vmap;
    for (int i=0; i<n; i++)
        vmap[school_id[i]].push_back(power[i]);
    
    map<int, vector<int>>::iterator it;
    for (it = vmap.begin(); it !=vmap.end();it++)
        sort(it->second.begin(), it->second.end(), greater<int>());

    int cnt=0;
    for (it = chosen_one.begin(); it != chosen_one.end(); it++)
    {
        for (int i=0; i<it->second.size(); i++)
        {
            if (it->second[i] < vmap[it->first][0])
                cnt++;
        }
    }

    cout<<cnt;
    return 0;
}