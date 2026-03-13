#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < n; i++)
    {
        int length = s.length();
        int middle_index;

        if (length % 2 != 0)
            middle_index = length / 2;
        else
            middle_index = length / 2 - 1;

        result += s[middle_index];
        s.erase(middle_index, 1);
    }

   
    cout << result << endl;

    return 0;
}
