/*
 * Author: Abdusamad Nigmatov
 * Date: 04.12.2023
 * Name: ABDUSAMAD
 */

#include <iostream>
#include <vector>

using namespace std;

pair<int, int> searchInsertPosition(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return {1, mid};
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return {-1, low};
}

int main() {
    int n, target;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cin >> target;

    pair<int, int> result = searchInsertPosition(nums, target);

    cout << result.first << " " << result.second << endl;

    return 0;
}
