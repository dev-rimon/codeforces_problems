#include <iostream>
#include<string>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            cout << "1" << endl;
            return;
        }
    }
    cout << s.size() << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}