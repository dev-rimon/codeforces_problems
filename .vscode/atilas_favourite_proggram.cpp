#include <iostream>
#include<algorithm>
#include<string>
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
    int maxvlue = 0;
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            int current = c - 'a' + 1;
            maxvlue = max(maxvlue, current);
        }
    }
    cout << maxvlue << endl;
    }

    

    return 0;
}