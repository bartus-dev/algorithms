#include <iostream>
#include <cstdlib>

long long gcd_iterative(long long a, long long b) {
    a = std::abs(a);
    b = std::abs(b);

    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

long long gcd_recursive(long long a, long long b) {
    a = std::abs(a);
    b = std::abs(b);

    if (b == 0) {
        return a;
    }
    return gcd_recursive(b, a % b);
}


int main() {
    long long num1;
    long long num2;

    std::cout << "Enter two digits: " << "\n";
    std::cin >> num1;
    std::cin >> num2;

    long long result_iter = gcd_iterative(num1, num2);
    long long result_rec = gcd_recursive(num1, num2);

    std::cout << "Iterative result: " << result_iter << "\n";
    std::cout << "Recursive result: " << result_rec << "\n";

    return 0;
}
