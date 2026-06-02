#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();
    map<char, int> freq;
    
    // Count the frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    // Calculate n!
    long long result = factorial(n);

    // Divide by f! for each repeated character
    for (auto const& [chars, count] : freq) {
        result /= factorial(count);
    }

    cout << result << endl;

    return 0;
}