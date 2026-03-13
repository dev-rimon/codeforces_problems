#include <iostream>


using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;
        int count[7] = {0};
        for (char c : s)
        {
            count[c - 'A']++;
        }
        int need = 0;
        for (int i = 0; i < 7; i++)
        {
            if (count[i] < m)
            {
                need += (m - count[i]);
            }
        }
        cout << need << endl;
    }

    return 0;
}