#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<bool> used(n + 1, false);
    p[n] = 1;
    used[1] = true;

    for (int i = n - 1; i >= 1; --i)
    {
        for (int v = 1; v <= n; v++)
        {
            if (!used[v] && (abs(v - p[i + 1]) % i == 0))
            {
                p[i] = v;
                used[v] = true;
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << (i == n ? "" : " ");
    }
    cout << endl;
}

int main()
{
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int T;
    std::cin >> T;
    while (T--)
        solve();

    return 0;
}