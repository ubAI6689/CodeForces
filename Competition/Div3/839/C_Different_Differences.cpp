#include <iostream>
#include <vector>
#include <set>

std::vector<int> create_array(int n, int k) {
    std::vector<int> result;
    int current = 1;
    std::set<int> used_elements;
    for (int i = 1; i <= k; i++) {
        int increment = 1;
        while (current + increment <= n && used_elements.find(current + increment) == used_elements.end()) {
            increment++;
        }
        current += increment - 1;
        result.push_back(current);
        used_elements.insert(current);
    }
    return result;
}

int main() {
    std::vector<int> result = create_array(9, 5);
    for (int x : result) {
        std::cout << x << " ";
    }
    std::cout << std::endl;  // Output: 1 3 6 8 9
    return 0;
}
