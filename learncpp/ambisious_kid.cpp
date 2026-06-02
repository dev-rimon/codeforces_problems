#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
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
    for (int i = 0; i < n; i++)
    {
        arr[i] = abs(arr[i]);
    }

    sort(arr.begin(), arr.end());
    int ans = arr[0]-0;
    cout<<ans<<endl;

    return 0;
}