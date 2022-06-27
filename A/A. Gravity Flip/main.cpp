#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int cubes[n];

  for (int i = 0; i < n; i++) {
    cin >> cubes[i];
  }
  sort(cubes, cubes + n);

  for (int i = 0; i < n; i++) {
    cout << cubes[i] << " ";
  }

  return 0;
}
