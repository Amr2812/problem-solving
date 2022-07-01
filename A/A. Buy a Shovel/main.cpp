#include <bits/stdc++.h>
using namespace std;

int main() {
  int price, denomination, n = 10;
  cin >> price >> denomination;

  for (int i = 1; i < 10; i++) {
    if (price * i % 10 == denomination || price * i % 10 == 0) {
      if (i < n) n = i;
    }
  }

  cout << n;
}
