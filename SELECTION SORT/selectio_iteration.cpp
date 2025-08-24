#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i; // Assume current index is the smallest
        int key = arr[i]; // Key for debugging

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }

        // Swap only once per iteration
        swap(arr[i], arr[minIndex]);

        // Debug output
        cout << "i = " << i << " j = " << minIndex 
             << " key = " << key << ", Swapped (" << arr[i] << ", " << arr[minIndex] << ")\n";
    }
}

void printArray(vector<int> &arr) {
    for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in array or vector: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << "\nSorting process:\n";
    selectionSort(arr);

    cout << "\nSorted array: ";
    printArray(arr);

    return 0;
}
