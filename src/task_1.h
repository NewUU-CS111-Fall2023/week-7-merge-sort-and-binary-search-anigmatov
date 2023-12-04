/*
 * Author: Abdusamad Nigmatov
 * Date: 04.12.2023
 * Name: ABDUSAMAD
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_remaining_sum(int T, vector<pair<int, vector<int>>> &test_cases) {
    vector<int> results;

    for (int t = 0; t < T; ++t) {
        int N = test_cases[t].first;
        vector<int> &A = test_cases[t].second;

        vector<int> medians;
        for (int i = 1; i < N - 1; i += 2) {
            vector<int> subarray = {A[i - 1], A[i], A[i + 1]};
            sort(subarray.begin(), subarray.end());
            medians.push_back(subarray[1]);
        }

        int min_median = *min_element(medians.begin(), medians.end());
        A.erase(find(A.begin(), A.end(), min_median));

        int remaining_sum = 0;
        for (int num : A) {
            remaining_sum += num;
        }
        results.push_back(remaining_sum);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}

int main() {
    int T;
    cin >> T;

    vector<pair<int, vector<int>>> test_cases;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        test_cases.push_back({N, A});
    }

    find_remaining_sum(T, test_cases);

    return 0;
}
