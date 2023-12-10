#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, calories = 0;
  cin >> a >> b >> c >> d;

  string locations;
  cin >> locations;

  for (int i = 0; i < locations.size(); i++) {
    int num = locations[i] - '0';

    if (num == 1) calories += a;
    if (num == 2) calories += b;
    if (num == 3) calories += c;
    if (num == 4) calories += d;
  }

  cout << calories;
}
