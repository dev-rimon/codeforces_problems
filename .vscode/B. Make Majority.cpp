#include <iostream>
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
        string result = " ";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' && i + 1 < s.length() && s[i + 1] == '0')
            {
                continue;
            }
            result += s[i];
        }
        int count_0 = 0;
        int count1 = 0;
        for (int i = 0; i < result.length(); i++)
        {
            if (result[i] == '0')
            {
                count_0++;
            }
           if (result[i]=='1')
           {
            count1++;
           }
           
        }
        if (count_0 >= count1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}