// https://codeforces.com/problemset/problem/1138/A
#include <iostream>

void solve(int n)
{   
    int array[n];
    int one = 0; int two = 0;
    int sushi = 0; int result = 0;
    for (int i = 0, x; i < n && std::cin >> x; i++) array[i] = x;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 1) one++;
        if (array[i] == 2) two++;
        if ((one != 0 && two != 0) && (array[i] != array[i+1])) 
        {
            sushi = (std::min(one,two))*2;
            if (result < sushi) result = sushi;

            if (array[i] == 1) i -= one;
            else i -= two;
            
            one = 0;
            two = 0;
        }
    }
    std::cout << result << std::endl;
}

int main()
{
    int n; std::cin >> n;
    solve(n);
    return 0;
}