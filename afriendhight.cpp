#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    int arr[n];
    int ans1 = 0;
    int ans2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > m)
        {

            ans1 += 2;
        }
        else
        {

            ans2 += 1;
        }
    }
    int res = ans1 + ans2;
    cout << res << endl;

    return 0;
}