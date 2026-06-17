#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for(int n = start; n <= end; n++) {
        int temp = n, digits = 0;

        while(temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = n;
        int sum = 0;

        while(temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if(sum == n)
            cout << n << " ";
    }

    return 0;
}