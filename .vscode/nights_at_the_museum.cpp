#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char cur = 'a';
    int sum = 0;
    for (char c : s)
    {
        int diff = abs(c - cur);
        sum += min(diff, 26 - diff);
        cur = c;
    }

    cout << sum << endl;
    ;
}
