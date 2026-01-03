#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minindex = 1;
    int maxindex = 2;
    int min = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(arr[i] - arr[i + 1]);
        if (diff < min)
        {
            min = diff;
            minindex = i + 1;
            maxindex = i + 2;
        }
    }

    int diff = abs(arr[n - 1] - arr[0]);
    if (diff < min)
    {
        min = diff;
        minindex = n;
        maxindex = 1;
    }

    cout << minindex << " " << maxindex << endl;
    return 0;
}