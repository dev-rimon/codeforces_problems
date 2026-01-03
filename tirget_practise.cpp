
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n_friends, k_bolots, l_mililetters, c_limes, d_siles, p_salt, nl_drinks, np_salts;
    cin >> n_friends >> k_bolots >> l_mililetters >> c_limes >> d_siles >> p_salt >> nl_drinks >> np_salts;
    int sum = k_bolots * l_mililetters;
    int sum2 = sum / nl_drinks;    // drinks for tasts
    int sum3 = c_limes * d_siles;  // limes
    int sum4 = p_salt / n_friends; // salt

    int largest = std::min({sum2, sum3, sum4});
    

    int ans = largest / n_friends;

    cout << ans << endl;

    return 0;
}
