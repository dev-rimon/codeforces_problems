#include <iostream>
#include <algorithm> // Needed for min()

#define ll long long int
using namespace std;

void solve() {
    ll l, r;
    cin >> l >> r;

    ll best_lucky_number = l;
    ll max_luckiness_found = -1;

    // Optimization: A luckiness of 9 repeats at least once every 100 numbers.
    // If the range is huge, we only need to check the first 100 numbers.
    ll limit = min(r, l + 100);

    for (ll i = l; i <= limit; i++) {
        ll temp = i; // Copy 'i' so we don't destroy the loop variable
        ll max_digit = 0;
        ll min_digit = 9; // Reset to 9 for every new number

        // Extract digits of the current number 'i'
        while (temp > 0) {
            ll last_digit = temp % 10;
            
            if (last_digit > max_digit) max_digit = last_digit;
            if (last_digit < min_digit) min_digit = last_digit;

            temp /= 10;
        }

        // Handle the edge case if the number itself was 0
        if (i == 0) {
            max_digit = 0;
            min_digit = 0;
        }

        ll current_luckiness = max_digit - min_digit;

        // Keep track of the luckiest number found so far
        if (current_luckiness > max_luckiness_found) {
            max_luckiness_found = current_luckiness;
            best_lucky_number = i;
        }

        // If we hit the absolute maximum luckiness (9), we can stop early!
        if (max_luckiness_found == 9) {
            break;
        }
    }

    cout << best_lucky_number << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        solve(); 
    }

    return 0;
}