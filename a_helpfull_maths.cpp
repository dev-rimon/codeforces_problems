#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int main()
{
    string s;
    cin >> s;

    string nums = "";
    for (int i = 0; i < s.size(); i += 2)
    {
        nums += s[i];
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
            cout << "+";
    }

    cout << endl;
    return 0;
}
