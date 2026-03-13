#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    int count = 0;
    if (a < b)
    {
        for (int i = 10; i >= 0; i--)
        {
            if (sum != b)
            {
                sum = sum + i;
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}