#include <iostream>
#include <algorithm>

#include <string>

using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int yes_count = count(s.begin(), s.end(), 'Y');
        if (yes_count > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}