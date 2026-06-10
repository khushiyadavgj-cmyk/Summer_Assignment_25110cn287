    #include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt the user for input
    cout << "Enter an integer: ";
    cin >> num;

    cout << "\nMultiplication Table of " << num << ":\n";
    cout << "-------------------------\n";

    // Loop to print the table from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}