#include <iostream>

int main() {
    long long n; // Using long long to prevent overflow for large numbers
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a positive number." << std::endl;
    } else {
        // Formula-based calculation
        long long sum = n * (n + 1) / 2;
        std::cout << "The sum of first " << n << " natural numbers is: " << sum << std::endl;
    }

    return 0;
}