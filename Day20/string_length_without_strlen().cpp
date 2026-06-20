#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count = 0;

    while(str[count] != '\0')
        count++;

    cout << count;

    return 0;
}