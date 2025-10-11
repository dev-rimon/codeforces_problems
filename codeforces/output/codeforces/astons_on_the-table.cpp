#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    vector<char> color(n);

    for (int i = 0; i < n; i++)
    {
        cin >> color[i];
    }
    for (size_t i = 0; i < color.size() - 1; ++i)
    {

        if (color[i] == color[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
