#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[2005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 2; j < n; j++) // at least one element between
        {
            int sum = 0;

            for (int k = i + 1; k < j; k++)
            {
                sum += a[k];
            }

            if (a[i] * a[j] == sum)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}