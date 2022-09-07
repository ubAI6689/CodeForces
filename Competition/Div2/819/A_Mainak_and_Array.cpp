#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void test_case()
{	
	int N;
	cin >> N;

	int A[N];
	int ans = -1000000007;

	for(int i = 0; i < N; ++i){
		cin >> A[i];
	}

	for(int i = 0; i < N; ++i){
		ans = max(ans, A[(i - 1 + N) % N] - A[i]);
	}

	for(int i = 1; i < N; ++i){
		ans = max(ans, A[i] - A[0]);
	}

	for(int i = 0; i < N - 1; ++i){
		ans = max(ans, A[N - 1] - A[i]);
	}

	cout << ans << '\n';
}

int main()
{
    int t; cin>>t;
    while(t--)
        test_case();
    return 0;
}

// int main()
// {
//     int t; std::cin>>t;
//     while(t--)
//     {

//         std::vector<int> og_array;
//         std::vector<int> sorted_array;
//         int n; std::cin>>n;
//         for (int i = 0, x; i < n && std::cin>>x; i++)
//         {
//             og_array.push_back(x);
//             sorted_array.push_back(x);
//         }
//         sort(sorted_array.begin(),sorted_array.end());
        
//         int count=0;
//         int ind_min, ind_max;
//         for (int i = 0; i < n; i++)
//         {
//             if (og_array[i] == sorted_array[i])
//                 count++;
//             if (og_array[i] == sorted_array[0]) ind_min = i;
//             if (og_array[i] == sorted_array[n-1]) ind_max = i;
//         }
//         if (count == n) {std::cout<<og_array[n-1]-og_array[0]<<std::endl; continue;}
//         if (ind_min == 0 || ind_max == n-1) {std::cout<<og_array[ind_max]-og_array[ind_min]<<std::endl; continue;}
//         if (ind_min>ind_max && ind_min-ind_max==1) {std::cout<<og_array[ind_max]-og_array[ind_min]<<std::endl; continue;}
        
//         int temp = 0;
//         if (og_array[ind_max]-og_array[ind_max+1] > og_array[ind_max]-og_array[0]) {
//             std::cout<<og_array[ind_max]-og_array[ind_max+1]<<std::endl;
//             continue;
//         }
//         else {
//             std::cout<<og_array[ind_max]-og_array[0]<<std::endl;
//             continue;
//         }
//     }
//     return 0;
// }