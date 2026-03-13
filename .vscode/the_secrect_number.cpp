#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> ans;
        long long d = 11;

        while (n >= d)
        {
            if (n % d == 0)
            {
                ans.push_back(n / d);
            }

            d = (d - 1) * 10 + 1; // must be outside if
        }

        cout << ans.size() << endl;

        for (int i = ans.size() - 1; i >= 0; --i)
            cout << ans[i] << " ";

        cout << endl;
    }

    return 0;
}