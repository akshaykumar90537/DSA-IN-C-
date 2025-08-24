#include <iostream>
using namespace std;

int main() {
    int n, q, er = 0;  // Initialize error count
    cin >> n;
    
    int arr[1000];  // Increased size to handle more elements safely

    // Taking input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Queries
    cin >> q;
    for (int i = 0; i < q; i++) {
        int type, val, pos;
        cin >> type; 

        if (type == 1) {  // Insert at the end
            cin >> val;
            arr[n] = val;
            n++;
        } 
        else if (type == 2) {  // Insert at a specific position
            cin >> val >> pos;

            if (pos < 0 || pos > n) {  // Check if position is valid
                er++;  // Count errors
            } else {
                // Shift elements to the right
                for (int j = n; j > pos; j--) {
                    arr[j] = arr[j - 1];
                }
                arr[pos] = val; // Insert at position
                n++;
            }
        }
    }

    // Printing final array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print error message after array output (if any invalid positions)
    if (er > 0) {
        cout << "Invalid position" << endl;
    }

    return 0;
}