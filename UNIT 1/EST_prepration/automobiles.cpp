#include <iostream>
using namespace std;

const int START_YEAR = 1932;
const int END_YEAR = 1984;
const int SIZE = END_YEAR - START_YEAR + 1;

int main() {
    int AUTO[SIZE];  // Array to hold sales data from 1932 to 1984

    // Sample input for demonstration
    cout << "Enter automobile sales for each year from 1932 to 1984:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Year " << (START_YEAR + i) << ": ";
        cin >> AUTO[i];
    }

    // Part (a): Count number of years with sales > 300
    int NUM = 0;
    for (int i = 0; i < SIZE; i++) {
        if (AUTO[i] > 300) {
            NUM++;
        }
    }
    cout << "\nNumber of years with sales more than 300: " << NUM << endl;

    // Part (b): Print year and number of automobiles sold
    cout << "\nYear-wise Automobile Sales:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << START_YEAR + i << " : " << AUTO[i] << " automobiles\n";
    }

    return 0;
}
