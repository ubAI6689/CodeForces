// correction. https://codeforces.com/problemset/submission/1722/170180048

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
// #define loop for (int i = 0; i < n; i++)
std::map<std::string, int> cnt;
int N;
std::string S[3][1000];
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        std::cin>>N;
        cnt.clear();
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < N; j++)
            {
                std::cin>>S[i][j];
                cnt[S[i][j]]++;
            }
        for (int i = 0; i < 3; i++)
        {
            int ans = 0;
            for (int j = 0; j < N; j++)
            {
                int c = cnt[S[i][j]];
                ans += c == 1? 3 : c == 2? 1 : 0;
            }
            std::cout<<ans<<(i == 2? "\n" : " ");
        }
    }
    return 0;
}


// bool binarySearch(std::vector<std::string> v, std::string word)
// {   
//     sort(v.begin(),v.end());
//     int j_low  = 0;
//     int j_high = v.size() - 1;

//     while(j_low<=j_high)
//     {
//         int j_mid = (j_high+j_low)/2;
//         if (v[j_mid] == word) return true;
//         else if (v[j_mid] > word) j_high = j_mid-1;
//         else j_low = j_mid+1;
//     }
//     return false;
// }

// int main()
// {
//     int t; std::cin>>t;
//     while(t--)
//     {
//         int point[4] = {};
//         int n; std::cin>>n;
//         std::vector<std::string> v1;
//         std::vector<std::string> v2;
//         std::vector<std::string> v3;
//         std::set<std::string> d;

//         std::string temp;
//         loop {std::cin>>temp; v1.push_back(temp); d.insert(temp);}
//         loop {std::cin>>temp; v2.push_back(temp); d.insert(temp);}
//         loop {std::cin>>temp; v3.push_back(temp); d.insert(temp);}

//         std::set<std::string>::iterator it;
//         for (it = d.begin(); it != d.end(); ++it)
//         {
//             int index = 0;
//             int count = 0;
//             for (auto iter : v1) {if (*it == iter) {count++; point[1]++; index = 1; break;}}
//             for (auto iter : v2) {if (*it == iter) {count++; point[2]++; index = 2; break;}}
//             for (auto iter : v3) {if (*it == iter) {count++; point[3]++; index = 3; break;}}
//             // if (binarySearch(v1, *it)) {count++; point[1]++; index = 1;}
//             // if (binarySearch(v2, *it)) {count++; point[2]++; index = 2;}
//             // if (binarySearch(v3, *it)) {count++; point[3]++; index = 3;}

//             if (count == 1) {point[index]+=2;}
//             if (count == 3) {point[1]--; point[2]--; point[3]--;}
//         }
//         std::cout<<point[1]<<' '<<point[2]<<' '<<point[3]<<std::endl;
//     }
//     return 0;
// }


// int main()
// {
//     int t; std::cin>>t;
//     while(t--)
//     {
//         int n; std::cin>>n;
//         int point[3]={};
//         std::string s[3][n]; std::set<std::string> d;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 std::string temp;
//                 std::cin>>temp;
//                 s[i][j] = temp;
//                 d.insert(temp);
//             }
//         }

//         int index = 0;
//         std::set<std::string>::iterator it;
//         for (it = d.begin(); it!=d.end();++it)
//         {   
//             int count = 0;
//             for (int i = 0; i < 3; i++)
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     if (s[i][j] == *it)
//                     {
//                              if (i == 0) {point[i]++; count++; index = i;}
//                         else if (i == 1) {point[i]++; count++; index = i;}
//                         else if (i == 2) {point[i]++; count++; index = i;}
//                     }
//                 }
//             }
//             if (count == 3) {point[0]--; point[1]--; point[2]--;}
//             if (count == 1) {point[index]+=2;}
//         }
//         std::cout<<point[0]<<' '<<point[1]<<' '<<point[2]<<std::endl;
//     }
//     return 0;
// }