#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            unsigned long long sum = 0;

            if (i - 1 >= 0 && j - 1 >= 0) {
                sum += a[i - 1][j] + a[i][j - 1];
            }

            if (sum == 0) sum = 1;

            a[i][j] = sum;
            cout << sum << " ";
        }
        cout << "\n";
    }
}
