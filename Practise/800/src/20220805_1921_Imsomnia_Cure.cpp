/*
Imsomnia_Cure

URL: https://codeforces.com/problemset/problem/148/A
Question: «One dragon. Two dragon. Three dragon», — the princess was counting. 
She had trouble falling asleep, and she got bored of counting lambs when she was nine.

However, just counting dragons was boring as well, so she entertained herself at 
best she could. Tonight she imagined that all dragons were here to steal her, 
and she was fighting them off. Every k-th dragon got punched in the face with a frying pan. 
Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels.
Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?

Input
Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).

Output
Output the number of damaged dragons.
*/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> klmn;
    for (int i = 0, x; i < 4 && cin >> x; i++) klmn.insert(x);

    int d;      cin >> d;

    set<int> num;
    for(int i = 1; i < d+1; i++)
    {
        for (auto it = klmn.begin(); it != klmn.end(); it++)
        {
            if (*klmn.begin() > d) break;
            else if (i % *it == 0) num.insert(i);
        }
    }
    cout<<num.size()<<endl;
    return 0;
}
