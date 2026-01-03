#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int maxSum = arr[0];
        int currentSum = arr[0];
        int start = 0, end = 0, tempStart = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] > currentSum + arr[i]) {
                currentSum = arr[i];
                tempStart = i;
            } else {
                currentSum += arr[i];
            }

            if (currentSum > maxSum) {
                maxSum = currentSum;
                start = tempStart;
                end = i;
            }
        }

        int length = end - start + 1;
        int  average = (int )maxSum / length;

        
        cout  << average << endl;
      
        // for (int i = start; i <= end; i++) cout << arr[i] << " ";
        // cout << "\n\n";
    }

    return 0;
}
