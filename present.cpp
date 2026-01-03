#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    // input array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // print index of 1, 2, 3, ... in order
    for (int value = 1; value <= n; value++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == value)
            {
                cout << i + 1 << " ";
                break; // found the position, go to next value
            }
        }
       
    }

    return 0;
}
