#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        size_t n, m, k;
        std::cin >> n >> m >> k;
        std::vector<int> a(m);
        for (size_t i = 0; i < m; i++) {
            std::cin >> a[i];
        }
        std::sort(a.begin(), a.end());
        if (a[m - 1] > (n + k - 1) / k) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
        }
    }
    return 0;
}
