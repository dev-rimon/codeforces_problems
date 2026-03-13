#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<int, int> freq;
        for (int x : a) freq[x]++;

        int remove_limit = n - k + 1; // max elements that can be removed
        int mex = 0;

        while (true) {
            if (freq[mex] <= remove_limit) break;
            mex++;
        }

        cout << mex << "\n";
    }

    return 0;
}
