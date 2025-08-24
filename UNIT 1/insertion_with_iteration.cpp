#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>& vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        int j = i - 1;
        int key = vec[i];

        while (j >= 0 && vec[j] > key) // Allow j to go to -1
        {
            vec[j + 1] = vec[j]; // Shift elements to the right
            j--;
        }
        vec[j + 1] = key; // Insert key at the correct position

        cout << "i = " << i << ", j = " << j << ", key = " << key << "\n";
    }
}

int main()
{
    vector<int> vec;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "\nEnter the elements of the vector or array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    insert(vec);

    cout << "After sorting: ";
    for (auto val : vec)
        cout << val << " ";
    cout << endl;

    return 0;
}
