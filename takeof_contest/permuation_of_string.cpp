#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    // duplicate remove
    s.erase(unique(s.begin(), s.end()), s.end());

    int len = s.length();

    long long result = 1;
    for (int i = 1; i < len+1; i++)
    {
        result *= i;
    }

    cout << result << endl;

    return 0;
}