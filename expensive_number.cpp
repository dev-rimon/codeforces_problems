#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool met_positaive = false;
        int count_zeroes = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                met_positaive = true;
            }
            else if (met_positaive)
            {
                count_zeroes++;
            }
        }
        cout << n - (count_zeroes + 1) << endl;
    }

    return 0;
}