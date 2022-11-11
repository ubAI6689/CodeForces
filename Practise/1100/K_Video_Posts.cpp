#include <iostream>
#include <set>
#include <vector>
int main()
{
    int n, k;
    std::cin>>n>>k;

    if (n<k)
    {
        std::cout<<"No\n";
        return 0;
    }

    int max_length=0;
    int array[n];
    for (int i=0; i<n; i++)
    {
        std::cin>>array[i];
        max_length = std::max(max_length, array[i]);
    }

    if (n==k)
    {   
        std::set<int> s;
        for (int i=0; i<n; i++)
        {
            s.insert(array[i]);
        }

        if (s.size()>1)
        {
            std::cout<<"No\n";
            return 0;
        }
        else
        {
            std::cout<<"Yes\n";
            for (int i=0; i<n; i++)
            {
                std::cout<<1<<" ";
            }
            return 0;
        }
    }

    if (k==1)
    {
        std::cout<<"Yes\n";
        std::cout<<n<<'\n';
        return 0;
    }
    else if (k==2)
    {
        int sum=0;
        for (int i=0; i<n-1; i++)
        {
            sum+=array[i];
        }

        if (sum!=array[n-1])
        {
            std::cout<<"No\n";
            return 0;
        }
        else
        {
            std::cout<<"Yes\n";
            std::cout<<n-1<<" "<<1;
            return 0;
        }
    }

    std::vector<int> ans;
    int cnt=0, temp = 0;
    for (int i=0; i<n; i++)
    {
        temp+=array[i];
        cnt++;
        if (i == n-1 && temp < max_length)
        {
            std::cout<<"No\n";
            return 0;
        }

        if (temp == max_length)
        {
            ans.push_back(cnt);
            temp=0;
            cnt=0;
            continue;
        }
        else
            continue;
    }
    std::cout<<"Yes\n";
    for (auto it : ans)
        std::cout<<it<<" ";
    return 0;
}