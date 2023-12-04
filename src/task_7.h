/*
 * Author: Abdusamad Nigmatov
 * Date: 04.12.2023
 * Name: ABDUSAMAD
 */

#include <iostream>
using namespace std;


int recursivePow(int x, int n) {
    if (n == 0) {
        return 1;
    }

    int result = x * recursivePow(x, n - 1);
    return result;
}

int main() {
    int x, n;
    cin >> x;
    cin >> n;

    int result = recursivePow(x, n);
    cout << result << endl;

    return 0;
}
