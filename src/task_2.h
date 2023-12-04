/*
 * Author: Abdusamad Nigmatov
 * Date: 04.12.2023
 * Name: ABDUSAMAD
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> Y(n);
    for (int i = 0; i < n; ++i) {
        cin >> Y[i];
    }

    vector<int> diffs(n);
    for (int i = 0; i < n; ++i) {
        diffs[i] = Y[i] - i - 1;
    }

    sort(diffs.begin(), diffs.end());

    long long beautifulness = 0;
    for (int i = 0; i < n; ++i) {
        beautifulness += abs(diffs[i] - diffs[n / 2]);
    }

    cout << beautifulness << endl;

    return 0;
}
