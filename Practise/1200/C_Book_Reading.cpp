#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
int main() {
    // read number of test cases
    int q;
    cin >> q;

    // iterate over test cases
    forn(i, q) {
        // read n and m
        long long n, m;
        cin >> n >> m;
        // calculate number of digits in n
        n = n / m;
        // store sum of digits in each position
        vector<int> digits(10);
        forn(i, 10)
            digits[i] = ((i + 1) * m) % 10;
        // calculate sum of digits in positions 1 to n % 10
        long long sum = 0;
        forn(i, n % 10)
            sum += digits[i];
        // calculate sum of digits in positions 1 to 10
        // multiply with the number of times 1 to 10
        // appear in positions 1 to n
        cout << sum + n / 10 * accumulate(digits.begin(), digits.end(), 0LL) << endl;
    }
}