#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, children, count[4] = {0}, teams[4][5001];
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> children;
    count[children]++;
    teams[children][count[children]] = i;
  }

  int nteam = min(min(count[1], count[2]), count[3]);
  cout << nteam << endl;

  for (int i = 1; i <= nteam; i++) {
    cout << teams[1][i] << " " << teams[2][i] << " " << teams[3][i] << endl;
  }
}
