#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a 4-digit number: ";
    cin >> n;

    int d1 = n % 10;
    n = n / 10;

    int d2 = n % 10;
    n = n / 10;

    int d3 = n % 10;
    n = n / 10;

    int d4 = n % 10;

    if (d1 == d2 || d1 == d3 || d1 == d4 ||
        d2 == d3 || d2 == d4 ||
        d3 == d4) {
        cout << "Digits are not distinct";
    } else {
        cout << "Digits are distinct";
    }

    return 0;
}