// https://codeforces.com/contest/1759/problem/B
 #include <bits/stdc++.h>
 int main()
 {
    // test cases
    int T; std::cin >> T;
    while (T--)
    {
        // input m = number of found elements and s=sum of forgotten numbers (1<=m<=50, 1<=s<=1000)
        int m, s; std::cin >> m >> s;
        // vector to store the forgotten numbers
        std::vector<int> v;
        for (int i = 0; i < m; i++)
        {
            int x; std::cin >> x;
            v.push_back(x);
        }

        // determine possible to append few numbers into v 
        // sum of the appended numbers must be equal to s
        // v must be a permutation
        // if possible then print "YES"
        // else print "NO"

        // sort v
        std::sort(v.begin(), v.end());
         
        // find missing numbers in v
        std::vector<int> missing;
        for (int i = 1; i <= 50; i++)
        {
            if (std::find(v.begin(), v.end(), i) == v.end())
            {
                missing.push_back(i);
            }
        }

        // append missing numbers into v until sum of appended is >= s
        int sum = 0;
        for (int i = 0; i < missing.size(); i++)
        {
            v.push_back(missing[i]);
            sum += missing[i];
            if (sum >= s)
            {
                break;
            }
        }
        // if sum of appended numbers is not equal to s then print "NO"
        if (sum != s)
        {
            std::cout << "NO" << std::endl;
            continue;
        }

        // sort v
        std::sort(v.begin(), v.end());

        // check if v is a permutation
        bool is_permutation = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != i + 1)
            {
                is_permutation = false;
                break;
            }
        }

        // if v is a permutation then print "YES"
        if (is_permutation)
        {
            std::cout << "YES" << std::endl;
        }

        // else print "NO"
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
 }