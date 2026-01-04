#include <iostream>
#include <vector>
using namespace std;
int main()
{

//     ✅ WAY–3 : Two Pointer(ONLY if array sorted & positive)

// ⚠️ Important : এই method কাজ করে only if :

//         Array sorted

//             All numbers positive

//                 Continuous subset দরকার(subarray)

//                     Idea

//                         Sliding window

//                             Sum বাড়ালে right++

//         Sum বেশি হলে left++
 int k;
    int n;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int left = 0;

    int sum = 0;
    for (int right = 0; right < v.size(); right++)
    {
        sum += v[right];
    }
    while (sum > k)
    {
        sum -= v[left];
        left++;
    }
    if (sum == k)
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
