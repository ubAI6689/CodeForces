#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n; std::cin>>n;
    int array[200001]={};
    std::vector<int> index, reverse_index;
    for (int i=0; i<n; i++)
    {
        int x; std::cin>>x;
        array[x]++;
        reverse_index.push_back(x);
        if (array[x]>2)
        {
            std::cout<<"NO\n";
            return 0;
        }
        else if (array[x]==2)
        {
            index.push_back(x);
            reverse_index.pop_back();
        }
    }
    sort(index.begin(), index.end());
    sort(reverse_index.begin(), reverse_index.end(), std::greater<int>());

    std::cout<<"YES\n";
    std::cout<<index.size()<<std::endl;
    for (auto it : index) std::cout<<it<<" ";
    std::cout<<'\n';
    std::cout<<reverse_index.size()<<std::endl;
    for (auto it : reverse_index) std::cout<<it<<" ";
    
    return 0;
}