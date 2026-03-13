#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s = "codeforces";
        string s1;
        cin >> s1;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int i = 0; i < s1.size(); i++)
            {
                if (s[i] != s1[i])
                {
                    count++;
                }
            }
        }
        cout << count / 10 << endl;
    }

    return 0;
}