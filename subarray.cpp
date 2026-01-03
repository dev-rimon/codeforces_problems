#include <iostream>
#include<vector>

using namespace std;
int maximum_sum(vector<int> arr)
{
    int st = 0;
    int end = arr.size() - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if (arr[mid - 1] < arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

        int main()
        {
            vector<int> arr = {1, 3, 5, 7, 9, 8, 6, 4, 2};
            cout << maximum_sum(arr);
            return 0;
        }
