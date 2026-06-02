#include <iostream>
#include <numeric>

using namespace std;

// Function to calculate Greatest Common Divisor
long long gcd(long long a, long long b) {
   if (b==0)
   {
  return a;
   }
   else return gcd(b,a %b);
   
}

// Function to calculate Least Common Multiple
long long lcm(long long a, long long b) {
  return (a*b/gcd(a,b));
}

void solve() {
    long long a, b;
    cin >> a >> b;
    
    if (b % a == 0) {
        cout << b * (b / a) << "\n";
    } else {
        cout << lcm(a, b) << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}