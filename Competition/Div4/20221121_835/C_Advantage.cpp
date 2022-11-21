#include <bits/stdc++.h>

int main()
{
    int T; std::cin >> T;
    while (T--)
    {
        int n; std::cin >> n;
        std::vector<int> v(n);
        int biggest_number = 0;
        int biggest_index = 0;
        for (int i = 0; i < n; ++i)
        {
            std::cin >> v[i];
            if (v[i] > biggest_number)
            {
                biggest_number = v[i];
                biggest_index = i;
            }
        }
        
        // copy the vector
        std::vector<int> v_copy = v;

        // sort the vector
        std::sort(v_copy.begin(), v_copy.end(), std::greater<int>());

        // return the second biggest number
        int second_biggest_number = v_copy[1];

        for (int i = 0; i < n; ++i)
        {
            if (i == biggest_index)
            {
                std::cout << biggest_number - second_biggest_number << " ";
            }
            
            else
            {
                std::cout << v[i] - biggest_number << " ";
            }
        }
        std::cout<<'\n';
    }
    return 0;
}