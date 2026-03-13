#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }

        int odd = 0;
        for (auto &p : freq)
        {
            if (p.second % 2 != 0)
            {
                odd++;
            }
        }
        int need = max(0, odd - 1);
        if (need <= k && k <= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}