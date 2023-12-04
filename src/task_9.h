/*
 * Author: Abdusamad Nigmatov
 * Date: 04.12.2023
 * Name: ABDUSAMAD
 */

#include <iostream>
#include <vector>

using namespace std;

int findKthMissingPositive(vector<int>& arr, int k) {
    int n = arr.size();
    
    int currentNumber = 1; 
    int countMissing = 0; 

    while (countMissing < k) {
        if (currentNumber == arr[countMissing]) {
            currentNumber++;
        } else {
            countMissing++;
        }
    }

    return currentNumber + k - 1;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = findKthMissingPositive(arr, k);

    cout << result << endl;

    return 0;
}
