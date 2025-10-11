#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int value = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == value)
        {

            cout << i + 1 << endl;
            value++;
        }
    }

    return 0;
}