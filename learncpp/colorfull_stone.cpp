#include <iostream>
using namespace std;
int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    int pos = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (s[pos] == t[i])
        {
            pos++;
        }
    }

    cout << pos + 1 << endl;

    return 0;
}
