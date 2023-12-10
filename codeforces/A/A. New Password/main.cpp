#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  string letters = "abcdefghijklmnopqrstuvwxyz", pass = "";
  for (int i = 0; i < n; i++) {
    pass += letters[i % k];
  }

  cout << pass << endl;
}