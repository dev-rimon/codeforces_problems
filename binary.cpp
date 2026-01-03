#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int tar;
    cin >> tar;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Correct condition
        if (A[mid] == tar)
        {
            cout << mid << "\n"; // print answer
            return 0;            // exit program
        }

        // Check if left side is sorted
        if (A[start] <= A[mid])
        {
            if (A[start] <= tar && tar <= A[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            // Right side sorted
            if (A[mid] <= tar && tar <= A[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        // Your print
        cout << mid << "\n";
    }

    // If not found
    cout << -1;
}
