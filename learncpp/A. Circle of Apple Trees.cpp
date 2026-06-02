#include <iostream>
#include <vector>
#include <set>
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
        {
            cin >> arr[i];
        }

        int cout1 = 0;
        set<int> uniqueset(arr.begin(), arr.end());
        for (int x : uniqueset)
        {
            cout1++;
        }

        cout << cout1 << endl;
    }

    return 0;
}