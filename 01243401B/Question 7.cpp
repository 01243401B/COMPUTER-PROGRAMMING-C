#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (s.find('a') != string::npos)
        cout << "Contains 'a'";
    else
        cout << "Does not contain 'a'";

    return 0;
}

