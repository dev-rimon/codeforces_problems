#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct LinearBasis {
    long long basis[32];
    LinearBasis() {
        for (int i = 0; i < 32; i++) basis[i] = 0;
    }

    void insert(long long x) {
        for (int i = 31; i >= 0; i--) {
            if (!(x & (1LL << i))) continue;
            if (!basis[i]) {
                basis[i] = x;
                return;
            }
            x ^= basis[i];
        }
    }

    long long getMax() {
        long long res = 0;
        for (int i = 31; i >= 0; i--) {
            if ((res ^ basis[i]) > res) {
                res ^= basis[i];
            }
        }
        return res;
    }
};

void solve() {
    int n;
    cin >> n;
    LinearBasis lb;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        lb.insert(a);
    }
    cout << lb.getMax() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}