#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        int count = 1;  // first color always causes one jolt

        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}