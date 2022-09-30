#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n; std::cin>>n;
        int skill_type[4], initial_dmg[4];
        for (int i=0,x; i<n && std::cin>>x; i++)
            skill_type[i]=x;
        for (int i=0,x; i<n && std::cin>>x; i++)
            initial_dmg[i]=x;
        
        std::vector<int> frost, fire;
        for (int i=0; i<n; i++)
        {
            if (skill_type[i]==0)
                frost.push_back(initial_dmg[i]);
            else
                fire.push_back(initial_dmg[i]);
        }

        ll sum=0;
        if (fire.size()==n)
        {
            for (int i=0; i<fire.size(); i++)
                sum+=fire[i];
            std::cout<<sum<<'\n';
            continue;
        }
        else if (frost.size()==n)
        {
            for (int i=0; i<frost.size(); i++)
                sum+=frost[i];
            std::cout<<sum<<'\n';
            continue;
        }
        else if (frost.size()>fire.size())
        {
            sort(frost.begin(), frost.end(), std::greater<int>());
            sort(fire.begin(), fire.end(), std::greater<int>());
            int extra_dmg=fire.size();
            for (int i=0; i<extra_dmg; i++)
            {
                sum+=2*frost[i];
                sum+=2*fire[i];
            }
            for (int i=extra_dmg; i<frost.size(); i++)
                sum+=frost[i];
            std::cout<<sum<<'\n';
            continue;
        }
        else if (fire.size()>frost.size())
        {   
            sort(frost.begin(), frost.end(), std::greater<int>());
            sort(fire.begin(), fire.end(), std::greater<int>());
            int extra_dmg=frost.size();
            for (int i=0; i<extra_dmg; i++)
            {
                sum+=2*frost[i];
                sum+=2*fire[i];
            }
            for (int i=extra_dmg; i<fire.size(); i++)
                sum+=fire[i];
            std::cout<<sum<<'\n';
            continue;
        }
        else if (fire.size()==frost.size())
        {
            sort(frost.begin(), frost.end(), std::greater<int>());
            sort(fire.begin(), fire.end(), std::greater<int>());
            if (fire[fire.size()-1]<frost[frost.size()-1])
            {
                sum+=fire[fire.size()-1];
                for (int i=0; i<fire.size()-1; i++)
                    sum+=2*fire[i];
                for (int i=0; i<frost.size(); i++)
                    sum+=2*frost[i];
                std::cout<<sum<<'\n';
                continue;
            }
            else if (frost[frost.size()-1]<fire[fire.size()-1])
            {
                sum+=frost[frost.size()-1];
                for (int i=0; i<frost.size()-1; i++)
                    sum+=2*frost[i];
                for (int i=0; i<fire.size(); i++)
                    sum+=2*fire[i];
                std::cout<<sum<<'\n';
                continue;
            }
            else
            {
                sum+=frost[frost.size()-1];
                for (int i=0; i<frost.size()-1; i++)
                    sum+=2*frost[i];
                for (int i=0; i<fire.size(); i++)
                    sum+=2*fire[i];
                std::cout<<sum<<'\n';
                continue;
            }
        }
    }
    return 0;
}