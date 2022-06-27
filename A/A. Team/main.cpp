#include <bits/stdc++.h>
using namespace std;

int count(int n, int line[][3]) {
  int problems = 0;
  for (int i = 0; i < n; i++) {
    int sures = 0;
    for (int j = 0; j < 3; j++) {
      if (line[i][j] == 1) sures++;
    }
    if (sures >= 2) problems++;
  }

  return problems;
}

int main() {
  int n;
  cin >> n;
  int line[n][3];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> line[i][j];
    }
  }

  cout << count(n, line);
}
