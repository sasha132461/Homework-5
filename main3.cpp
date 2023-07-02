#include <iostream>

int opposite_number(const int n, const int number) {
    if (n <= 0) {
        std::cout << "Invalid value of n!" << std::endl;
        return 0;
    }

    if (number < 0 || number >= n) {
        std::cout << "Invalid value of number!" << std::endl;
        return 0;
    }

    int opposite = (number + n / 2) % n;
    return opposite;
}

int main() {
    int n, number;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of number: ";
    std::cin >> number;

    int result = opposite_number(n, number);
    std::cout << "Opposite number of " << number << ": " << result << std::endl;

    return 0;
}
