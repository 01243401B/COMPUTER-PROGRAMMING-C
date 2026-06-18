#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if (isupper(c))
        cout << "Uppercase letter";
    else
        cout << "Not an uppercase letter";

    return 0;
}

