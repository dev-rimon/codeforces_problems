#include<iostream>
#include<vector>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
 
        vector<long long> v = {x, y, z};
        sort(v.begin(), v.end());
 
        if (v[2] != v[1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << v[2] << " " << v[0] << " " << v[0] << "\n";
        }
    }
    return 0;
}