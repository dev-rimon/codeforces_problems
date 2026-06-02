#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> a(7);
        int sum = 0;

        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int mx = a[0];
        for (int i = 1; i < 7; i++)
        {
            if (a[i] > mx)
                mx = a[i];
        }

        int result = 2 * mx - sum;

        cout << result << endl;
    }

    return 0;
}