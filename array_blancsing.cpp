#include <iostream>
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

        if (n % 4 != 0)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> v;
        int sum_even = 0, sum_odd = 0;

        // n/2 even numbers
        for (int i = 2; i <= n; i += 2)
        {
            v.push_back(i);
            sum_even += i;
        }

        // (n/2 - 1) odd numbers
        for (int i = 1; i < n - 1; i += 2)
        {
            v.push_back(i);
            sum_odd += i;
        }

        // last odd number to balance
        v.push_back(sum_even - sum_odd);

        cout << "YES\n";
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
