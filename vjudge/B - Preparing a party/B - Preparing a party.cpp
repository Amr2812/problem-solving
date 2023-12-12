#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long max, min, a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n-1; ++i) {
        long long diff = abs(a[i] - a[i + 1]);
        if (i == 0) {
            min = diff;
            max = diff;
            continue;
        }

        if (diff > max) max = diff;
        if (diff < min) min = diff;
    }

    cout << max << " " << min;
}
