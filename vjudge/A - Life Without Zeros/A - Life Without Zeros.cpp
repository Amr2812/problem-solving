// https://vjudge.net/contest/598631#problem/A

#include <bits/stdc++.h>

using namespace std;

long long removeZeros (long long n) {
    string noZeros, nStr = to_string(n);

    for (char & i : nStr) {
        if (i != '0') {
            noZeros.push_back(i);
        }
    }

    return stoi(noZeros);
}

int main () {
    long long n1, n2;
    cin >> n1 >> n2;

    if (removeZeros(n1) + removeZeros(n2) == removeZeros(n1 + n2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
