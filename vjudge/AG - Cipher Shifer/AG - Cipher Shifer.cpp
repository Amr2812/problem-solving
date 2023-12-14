// https://vjudge.net/contest/596617#problem/AG

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n, currentIdx = 0; cin >> n;
        string s; cin >> s;

        for (int i = 0; i < s.size(); ++i) {
            if (s[currentIdx] == s[i+1]) {
                cout << s[currentIdx];
                currentIdx = i + 2;
                i++;
            }
        }
        cout << "\n";
    }
}
