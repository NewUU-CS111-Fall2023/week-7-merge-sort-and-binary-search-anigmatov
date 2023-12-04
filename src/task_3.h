/*
 * Author: Abdusamad Nigmatov
 * Date: 04.12.2023
 * Name: ABDUSAMAD
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N), B(M), result(N + M);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < M; ++i) {
            cin >> B[i];
        }

        int i = 0, j = 0, k = 0;

        while (i < N && j < M) {
            if (A[i] >= B[j]) {
                result[k++] = A[i++];
            } else {
                result[k++] = B[j++];
            }
        }

        while (i < N) {
            result[k++] = A[i++];
        }

        while (j < M) {
            result[k++] = B[j++];
        }

        for (int idx = 0; idx < N + M; ++idx) {
            cout << result[idx] << " ";
        }

        cout << endl;
    }

    return 0;
}
