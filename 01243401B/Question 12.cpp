#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter two floats: ";
    cin >> x >> y;
    cout << "Larger: " << (x > y ? x : y) << endl;
    return 0;
}

