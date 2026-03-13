#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ones = 0;
    for(char c : s) if(c == '1') ones++;

    // maximum
    int max_ones = ones;
    for(int i = 1; i < n-1; i++){
        if(s[i] == '0' && s[i-1] == '1' && s[i+1] == '1'){
            max_ones++;
        }
    }

    // minimum
    int min_ones = ones;
    for(int i = 1; i < n-1; i++){
        if(s[i] == '1' && s[i-1] == '1' && s[i+1] == '1'){
            min_ones--;
        }
    }

    cout << min_ones << " " << max_ones << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}