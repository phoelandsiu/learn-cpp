#include <iostream>

int main() {
    std::cout << "Hello, World" << std::endl;

    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++ val;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    sum = 0, val = 10;
    while (val >= 0) {
        sum += val;
        -- val;
    }
    std::cout << "Sum of 10 to 0 inclusive is " << sum << std::endl;

    std::cout << "Please enter two integers:" << std::endl;

    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    while (v1 <= v2) {
        std::cout << v1 << std::endl;
        ++ v1;
    }

    return 0;
}