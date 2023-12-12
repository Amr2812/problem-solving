// https://vjudge.net/contest/596617#problem/Z

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    char a[8][8];

    while (t--) {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (a[i][j] == '#' && a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#' &&
                    a[i + 1][j + 1] == '#') {
                    cout << i + 1 << " " << j + 1 << "\n";
                    break;
                }
            }
        }

    }
}
