#include <bits/stdc++.h>

using namespace std;

string can_split(double x1, double y1, double x2, double y2, double x3, double y3) 
{
    // triangle can be split if there is a maximum of one side (can be zero) that is horizontal or vertical
    // if there are two sides that are horizontal or vertical, then the triangle can't be split
    // if there are no sides that are horizontal or vertical, then the triangle can be split
    // if there is one side that is horizontal or vertical, then the triangle can be split
    // print "YES" if the triangle can be split, otherwise print "NO"
    int count = 0;
    if (x1 == x2 || y1 == y2)
        count++;
    if (x2 == x3 || y2 == y3)
        count++;
    if (x3 == x1 || y3 == y1)
        count++;
    if (count > 1)
        return "NO";
    else
        return "YES";
}

int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        double triangle[3][2];
        for (int i=0; i<3; i++)
        {
            std::cin>>triangle[i][0]>>triangle[i][1];
        }

        std::cout<<can_split(triangle[0][0], triangle[0][1], triangle[1][0], triangle[1][1], triangle[2][0], triangle[2][1])<<std::endl;
    }
}