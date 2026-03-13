#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        int minelemnt = numbers[0];
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] < minelemnt)
            {
                minelemnt = numbers[i];
            }
        }
        int plusadd = minelemnt + 1;
        auto it = std::min_element(numbers.begin(), numbers.end());

        if (it != numbers.end())
        {
            numbers.erase(it);
        }
        int mul = 1;
        for (int i = 0; i < numbers.size(); i++)
        {
            mul *= numbers[i];
        }

        int ans = mul * plusadd;
        cout << ans << endl;
    }

    return 0;
}
