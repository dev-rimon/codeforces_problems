#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    char arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   bool valid = false;

for (int i = 0; i < n && !valid; i++)
{
    for (int j = n - 1; j >= 0; j--)
    {
        if (i != j && arr[i] == arr[j])
        {
            valid = true;
            break;
        }
    }
}

if (valid)
    cout << "NO\n";
else
    cout << "YES\n";

    return 0;
}
