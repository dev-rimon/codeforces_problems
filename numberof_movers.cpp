#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 1; i < n; i++)
        {

            if (i % 2 != a[i] % 2)
            {
                swap(a[i], a[i - 1]);
                count++;
            }
        }

        cout << count << "\n";
        count = 0;
    }

    return 0;
}