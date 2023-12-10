#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int x[n], result[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  for (int i = 0; i < n; i++) {
    result[x[i] - 1] = i+1;
  }

  for (int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }
}
