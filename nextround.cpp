#include <iostream>
using namespace std;
int main()
{

    int n, k;
    int arr[1000000];
    cin >> n >> k;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            if (arr[i] >=arr[k-1])
            {
                count++;
            }
        }
        else
        {
            arr[k] = 0;
            if (arr[i] > arr[k-1])
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}