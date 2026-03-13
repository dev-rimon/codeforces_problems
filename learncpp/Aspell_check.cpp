#include <iostream>
#include <algorithm>
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
        string srt;
        cin >> srt;
        if (n == 5)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(srt.begin(),srt.end());
           string timir = "Timur";
        sort(timir.begin(), timir.end());
     
        if (timir == srt)
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