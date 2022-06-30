#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;

  int teams[n][2];
  for (int i = 0; i < n; i++) {
    cin >> teams[i][0] >> teams[i][1];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (teams[i][0] == teams[j][1]) {
        ans++;
      }
    }
  }

  cout << ans;
}
