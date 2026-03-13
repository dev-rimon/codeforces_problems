#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first = -1, last = -1;

        // find first and last B/b
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B' )
            {
                if (first == -1)
                    first = i;
                last = i;
            }
        }

        if (first != -1)
        {
            int result = last - first + 1;
            cout << result << endl;
        }
    }

    return 0;
}
