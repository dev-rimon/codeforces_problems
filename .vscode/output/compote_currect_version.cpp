#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    int burger = min(a, min(b / 2, c / 4));
    sum = burger * 7;
    cout << sum << endl;

    return 0;
}