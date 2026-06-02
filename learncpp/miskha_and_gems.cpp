#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int counta = 0;
    int countb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            counta++;
        }
        else if (a < b)
        {
            countb++;
        }
        if (a == b)
        {
            continue;
        }
    }
    if (counta > countb)
    {
        cout << "Mishka" << endl;
    }
    if (counta < countb)
    {
        cout << "Chris" << endl;
    }
    else if (counta == countb)
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
