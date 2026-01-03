#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int min_sum = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
         min_sum = min(min_sum, arr[i + n - 1]- arr[i]);
     
    }
       cout << min_sum << endl;

    return 0;
}
