#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::vector<int> remainders;

    for (int i = 0; i < 10; ++i) {
        std::cin >> n;
        int remainder = n % 42;

        bool is_unique = true;
        for (int j = 0; j < remainders.size(); ++j) {
            if (remainders[j] == remainder) {
                is_unique = false;
                break;
            }
        }

        if (is_unique) {
            remainders.push_back(remainder);
        }
    }

    std::cout << remainders.size() << std::endl;

    return 0;
}
