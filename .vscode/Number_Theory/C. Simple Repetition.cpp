#include <iostream>
#include <vector>
using namespace std;

bool isprime(long long int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    // Check odd factors up to the square root of n
    for (long long int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false; // Found a factor, not prime
        }
    }
    return true; // No factors found, it's prime
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, k;
        cin >> x >> k;
        long long int n = 0;
        vector<int> arr;
        for (int i = 0; i < k; i++)
        {
            arr.push_back(x);
        }
        for (int num : arr)
        {
            n = n * 100 + num;
        }

        if (isprime(n) == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}