#include <iostream>
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

        int n;
        cin >> n;
        string s;
        cin >> s;
        string sub = "2026";
        string sub2 = "2025";

        size_t b = s.find(sub);
        size_t c = s.find(sub2);

        if (b != string ::npos)
        {
            cout << 0 << endl;
        }
        else if (c != string ::npos)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}