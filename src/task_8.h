/*
 * Author: Abdusamad Nigmatov
 * Date: 04.12.2023
 * Name: ABDUSAMAD
 */

#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(vector<int>& nums) {
    int n = nums.size();
    
    int expectedSum = (n * (n + 1)) / 2;

    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }

    int missingNumber = expectedSum - actualSum;

    return missingNumber;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> nums[i];
    }

    int missingNumber = findMissingNumber(nums);

    cout << "0 " << missingNumber << endl;

    return 0;
}
