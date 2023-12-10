#include <bits/stdc++.h>
using namespace std;

int main() {
  int nCakesNeeded, tToBake, nCakesBaked, tOven;
  cin >> nCakesNeeded >> tToBake >> nCakesBaked >> tOven;

  int timesToUseOven = ceil(1.0 * nCakesNeeded / nCakesBaked);

  int o1 = 0, o2 = tOven;
  for (int i = 0; i < timesToUseOven; i++) {
    if (o1 <= o2) {
      o1 += tToBake;
    } else {
      o2 += tToBake;
    }
  }

  if (max(o1, o2) < timesToUseOven * tToBake) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
