#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    // Sort to get lexicographically smallest order
    sort(arr.begin(), arr.end());

    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}
