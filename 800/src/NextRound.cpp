#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> points(n);
    for (auto &it : points)
    {
        cin >> it;
    }

    int next = 0;
    int index = 0;
    while (index < points.size())
    {
        if (points.at(index) > 0 && points.at(index) >= points.at(k-1))
        {
            next++;
        }
        index++;
    }
    cout<<next<<endl;

    // print out content of vectors
    // for (int i: points){
    //     cout << i << ' ';
    // }

}