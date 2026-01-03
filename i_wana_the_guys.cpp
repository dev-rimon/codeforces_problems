#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;
    vector<int> p(x);
    for (int i = 0; i < x; i++) {
        cin >> p[i];
    }

    int y;
    cin >> y;
    vector<int> q(y);
    for (int i = 0; i < y; i++) {
        cin >> q[i];
    }

    vector<int> result;
    result.resize(p.size() + q.size());

    // Sort before merge
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());

    // Merge two sorted lists
    merge(p.begin(), p.end(), q.begin(), q.end(), result.begin());

    // Remove duplicates
    result.erase(unique(result.begin(), result.end()), result.end());

    bool flag = true;

    // Check levels 1 to n
    for (int i = 1; i <= n; i++) {
        if (find(result.begin(), result.end(), i) == result.end()) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
