#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int untreated = 0;
  int policeMen = 0;

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    if (v == -1) {
      if (policeMen == 0) {
        untreated++;
      } else {
        policeMen--;
      }
    } else {
      policeMen += v;
    }
  }

  cout << untreated;
}
