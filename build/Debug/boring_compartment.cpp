#include <iostream>
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
        int d = s[0] - '0';
        int k = s.length();
        int ans = (d - 1) * 10 + (k * (k + 1)) / 2;
        cout << ans << endl;
    }

    return 0;
}