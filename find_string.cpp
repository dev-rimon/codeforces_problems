#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int value_to_count = 'A';
        int value2 = 'B';
        int result_a = count(s.begin(), s.end(), value_to_count);
        int result_b = count(s.begin(), s.end(), value2);
        if (result_a > result_b)
        {
            cout << "A" << endl;
        }
        else
        {

            cout << "B" << endl;
        }
    }

    return 0;
}