#include <iostream>
using namespace std;

int main() {
    int n;
    long long product = 1;

    cin >> n;

    while(n > 0) {
        product *= n % 10;
        n /= 10;
    }

    cout << "Product = " << product;

    return 0;
}
