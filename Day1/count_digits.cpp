#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    cout << "Enter number: "; cin >> n;
    if(n == 0) count = 1;
    while(n != 0) { n /= 10; count++; }
    cout << "Total digits: " << count;
    return 0;
