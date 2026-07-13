#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}