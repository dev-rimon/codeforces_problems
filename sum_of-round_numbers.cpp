#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> numbers;
    int pogitions_multiper = 1;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0)
        {
            int round_number = digit * pogitions_multiper;
            numbers.push_back(round_number);
        }
        n /= 10;

        pogitions_multiper *= 10;
    }

    cout << numbers.size() << endl;
    // Print all the round number summands
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i] << (i == numbers.size() - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
