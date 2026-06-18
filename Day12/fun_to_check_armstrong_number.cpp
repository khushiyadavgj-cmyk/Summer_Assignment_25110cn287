#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, sum = 0;
    int digits = to_string(n).length();

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}