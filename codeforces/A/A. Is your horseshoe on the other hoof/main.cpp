#include <bits/stdc++.h>
using namespace std;

int main() {
  int shoes[4], n = 0;
  for (int i = 0; i < 4; i++) {
    cin >> shoes[i];
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i != j && shoes[i] == shoes[j]) {
        n++;
        shoes[i] = 0;
      }
    }
  }

  cout << n;
}
