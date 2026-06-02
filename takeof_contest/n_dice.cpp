#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b;
    vector<int> arr;   // ❗ size define না করে empty রাখলাম
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        string s = to_string(a) + to_string(b);
        int merged = stoi(s);
        arr.push_back(merged);
    }

    int counter = 1;

    for (int i = 1; i < n; i++)   // ❗ start from 1
    {
        if (arr[i] == arr[i - 1])
        {
            counter++;
        }
        else
        {
            counter = 1;
        }

        if (counter == 3)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}