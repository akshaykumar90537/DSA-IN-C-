// C++ program to implement Selection Sort
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[i]) {
                swap(arr[i],arr[j]);
            }
        }
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
    cout<<"Enter the number of elements in array or vector: ";
    cin>>n; 
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    selectionSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
