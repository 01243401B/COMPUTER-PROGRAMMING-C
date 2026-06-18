#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 != 0 && n % 3 == 0)
        cout << "Number is odd and divisible by 3";
    else
        cout << "Condition not met";

    return 0;
}

