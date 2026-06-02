#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long pev = n / 2;
    long long int ans = n & pev;
    if (ans == 0)
    {
        cout << "Ferocious Angry Fighter" << endl;
    }
    else
        cout << "HailaYehKyaHua" << endl;

    return 0;
}