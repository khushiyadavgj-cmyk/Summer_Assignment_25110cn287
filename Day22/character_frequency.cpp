#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    char ch;
    cin >> ch;

    int count = 0;

    for(char c : str) {
        if(c == ch)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}