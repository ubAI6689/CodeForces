#include <iostream>
int main()
{
    int n; std::cin>>n;
    int array[n];
    int max=0;
    for (int i=0;i<n;i++)
    {
        std::cin>>array[i];
        if (max<array[i])
            max=array[i];
    }
    int ans=0, cnt=0;
    for (int i=0; i<n;i++)
    {
        if (array[i]==max)
        {
            cnt++;
            if (i==n-1)
            {
                if (ans<cnt)
                    ans=cnt;        
            }
        }
        else
        {
            if (ans<cnt)
                ans=cnt;
            cnt=0;
        }
    }

    std::cout<<ans;
    // float n; std::cin>>n;
    // std::vector<float> v(n);
    // for (int i=0; i<n; i++)
    //     std::cin>>v[i];

    // int ans=1;
    // float average=0;
    // int loop=1;
    // for (int i=n; i>0; i--)
    // {
    //     // std::cout<<"\ni = "<<i<<'\n';
    //     float sum=0;
    //     int idx=0;
    //     for (int k=0; k<loop; k++)
    //     {
    //         float temp=0;
    //         for (int j=0; j<i; j++)
    //             temp+=v[idx+j];
    //         if (sum<temp)
    //             sum=temp;
    //         idx++;
    //     }

    //     float temp_average = sum/i;
    //     // std::cout<<"average: "<<temp_average<<'\n';
    //     if (average<temp_average)
    //     {
    //         average=temp_average;
    //         ans=i;
    //     }
    //     loop++;
    // }
    // std::cout<<ans;
    // return 0;
}