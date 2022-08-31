#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n; std::cin>>n;
    float minimum_sum = n*4.5;
    float mean=0; float sum=0;
    std::vector<float> d(n);

    for (int i = 0, x; i<n && std::cin>>x; i++) {sum+=x; if (x < 5) d.push_back(5-x);}
    sort(d.begin(),d.end(),std::greater<float>());
    
    mean = sum/n;
    if (mean >= 4.5) {std::cout<<0; return 0;}
    else 
    {   
        float required_sum = minimum_sum-sum;
        int i = 0; int step = 0;
        while(required_sum>0)
        {
            // std::cout<<required_sum<<std::endl;
            required_sum-=d[i];
            step++;
            i++;
        }
        std::cout<<step;
    }
    return 0;
}