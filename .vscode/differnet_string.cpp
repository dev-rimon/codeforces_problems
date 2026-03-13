#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string p = s;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                swap(s[i], s[i + 1]);
                break;
            }
        }

        if (s == p)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }

    return 0;
}
