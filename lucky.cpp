#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int right_sum = 0;
        int num;
        cin >> num;
        int arr[6];
        for (int i = 5; i >= 0; i--)
        {
            arr[i] = num % 10;
            num /= 10;
        }

        for (int i = 0; i < 3; i++)
        {
            sum += arr[i];
        }
        for (int i = 3; i < 6; i++)
        {
            right_sum += arr[i];
        }

        if (sum == right_sum)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }

    return 0;
}
