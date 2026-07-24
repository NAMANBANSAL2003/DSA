#include<iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int l, int h, int key) {
    if (l > h) {
        return -1; // Key not found
    }
    int mid = (l + h) / 2;
    if (arr[mid] == key) {
        return mid; // Key found
    } else if (arr[mid] < key) {
        return recursiveBinarySearch(arr, mid + 1, h, key);
    } else {
        return recursiveBinarySearch(arr, l, mid - 1, key);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    int result = recursiveBinarySearch(arr, 0, n - 1, key);
    if (result != -1) {
        cout << "Key found at index: " << result << endl;
    } else {
        cout << "Key not found" << endl;
    }
    return 0;
}