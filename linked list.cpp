#include <iostream>
using namespace std;

int main() {
    int borrowed[] = {101, 105, 101, 102, 304, 204, 205, 309, 102};
    int n = sizeof(borrowed) / sizeof(borrowed[0]);

    int unique[20];
    int count[20];
    int uniqueSize = 0;

    // Count occurrences and create unique list
    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < uniqueSize; j++) {
            if (borrowed[i] == unique[j]) {
                count[j]++;
                found = true;
                break;
            }
        }

        if (!found) {
            unique[uniqueSize] = borrowed[i];
            count[uniqueSize] = 1;
            uniqueSize++;
        }
    }

    // Find most borrowed book
    int maxIndex = 0;
    for (int i = 1; i < uniqueSize; i++) {
        if (count[i] > count[maxIndex]) {
            maxIndex = i;
        }
    }

    // Sort unique books based on borrow count (highest to lowest)
    for (int i = 0; i < uniqueSize - 1; i++) {
        for (int j = i + 1; j < uniqueSize; j++) {
            if (count[j] > count[i]) {
                int tempCount = count[i];
                count[i] = count[j];
                count[j] = tempCount;

                int tempBook = unique[i];
                unique[i] = unique[j];
                unique[j] = tempBook;
            }
        }
    }

    // Display results
    cout << "Book Borrow Count:\n";
    for (int i = 0; i < uniqueSize; i++) {
        cout << "Book ID " << unique[i]
             << " -> " << count[i] << " times\n";
    }

    cout << "\nMost Borrowed Book: " << borrowed[maxIndex]
         << endl;

    cout << "\nUnique Books:\n";
    for (int i = 0; i < uniqueSize; i++) {
        cout << unique[i] << " ";
    }

    cout << "\n\nUnique Books Sorted by Borrow Count (Highest to Lowest):\n";
    for (int i = 0; i < uniqueSize; i++) {
        cout << "Book ID " << unique[i]
             << " -> " << count[i] << " times\n";
    }

    return 0;
}