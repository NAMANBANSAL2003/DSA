#include <iostream>
using namespace std;

bool PNum(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    if (PNum(8))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}