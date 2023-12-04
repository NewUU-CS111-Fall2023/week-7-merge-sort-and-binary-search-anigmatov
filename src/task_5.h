/*
 * Author: Abdusamad Nigmatov
 * Date: 04.12.2023
 * Name: ABDUSAMAD
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> frequencyMap;
    
    for (int num : nums) {
        frequencyMap[num]++;
    }

    priority_queue<pair<int, int>> maxHeap;

    for (auto& entry : frequencyMap) {
        maxHeap.push({entry.second, entry.first});

        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }

    vector<int> result;
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    return result;
}

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cin >> k;

    vector<int> result = topKFrequent(nums, k);

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
