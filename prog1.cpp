#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;

    /* Alternatives:
    (std::cout << "Enter two numbers:") << std::endl;
    std::cout << "Enter two numbers:"; <-- this is a string literal
    std::cout << std::endl; <-- endl is a manipulator that ends the line and flushes the buffer
    */

    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    /* Alternatives:
    (std::cin >> v1) >> v2;
    std::cin >> v1;
    std::cin >> v2; 
    */

    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    return 0;
}