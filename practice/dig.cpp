#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    int lastDigit = num % 10;
    int firstDigit = num / 1000;

    if (firstDigit == lastDigit) {
        cout << "First and last digits are SAME";
    } else {
        cout << "First and last digits are DIFFERENT";
    }

    return 0;
}