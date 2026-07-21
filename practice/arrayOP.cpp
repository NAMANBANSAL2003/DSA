#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n----- Array Operations -----\n";
        cout << "1. Traversal\n";
        cout << "2. Insertion\n";
        cout << "3. Deletion\n";
        cout << "4. Update\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2:
            cout << "Enter position (0 to " << n << "): ";
            cin >> pos;
            cout << "Enter value to insert: ";
            cin >> value;

            if (pos >= 0 && pos <= n) {
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
                cout << "Element inserted successfully.\n";
            } else {
                cout << "Invalid Position.\n";
            }
            break;

        case 3:
            cout << "Enter position to delete (0 to " << n - 1 << "): ";
            cin >> pos;

            if (pos >= 0 && pos < n) {
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element deleted successfully.\n";
            } else {
                cout << "Invalid Position.\n";
            }
            break;

        case 4:
            cout << "Enter position to update (0 to " << n - 1 << "): ";
            cin >> pos;

            if (pos >= 0 && pos < n) {
                cout << "Enter new value: ";
                cin >> value;5
                arr[pos] = value;
                cout << "Element updated successfully.\n";
            } else {
                cout << "Invalid Position.\n";
            }
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 5);

    return 0;
}