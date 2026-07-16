#include <iostream>
using namespace std;

int main() {
    int size, target;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}