#include <iostream>
#include <string>
#include <algorithm>

#include <cctype>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int upercount = 0;
    int lowercout = 0;

    for (char ch : name)
    {
        if (ch >= 'A' && ch <= 'Z')
        { // Check if character is between 'A' and 'Z'
            upercount++;
        }
        else if (ch >= 'a' && ch <= 'z')
        { // Check if character is between 'a' and 'z'
            lowercout++;
        }
    }

    if (lowercout > upercount)
    {
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        cout << name << endl;
    }
    else if (upercount > lowercout)
    {
        transform(name.begin(), name.end(), name.begin(), ::toupper);
        cout << name << endl;
    }
    else if (lowercout == upercount)
    {
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        cout << name << endl;
    }

    return 0;
}