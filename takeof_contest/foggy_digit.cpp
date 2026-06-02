#include <iostream>
using namespace std;
int main()
{

    long long int n, x;
    cin >> n >> x;
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        long long sum = 0;
        while (a > 0)
        {
            int digit = a % 10;
            sum += digit;
            a /= 10;
        }
        if (sum % x==0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}