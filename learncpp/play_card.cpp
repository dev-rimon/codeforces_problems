#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void solve()
{
    int N, K, P, M;
    cin >> N >> K >> P >> M;
    P--;
    int win_cost;
    multiset<int> costs;
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (i == P)
        {
            win_cost = a;
            a = -1;
        }
        if (i < K)
        {
            costs.insert(a);
        }
        else
        {
            q.push(a);
        }
    }
    int ans = 0;
    while (true)
    {
        int v = *costs.begin();
        costs.erase(costs.begin());
        int cost = v;
        if (v == -1)
        {
            cost = win_cost;
        }
        if (M < cost)
            break;
        if (v == -1)
            ans += 1;
        M -= cost;
        q.push(v);
        costs.insert(q.front());
        q.pop();
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
}