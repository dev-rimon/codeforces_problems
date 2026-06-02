#include <iostream>
#include <vector>
#include <algorithm> // Included for general good practice, though not strictly needed here

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n); // Vector of size n

        // Fill the vector using 0-based indexing (0 to n-1)
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1; // Assign values from 1 to n
        }

        // Print the elements in reverse order by iterating backward from the last valid index
    
        for (int i = n - 1; i >= 0; i--)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
