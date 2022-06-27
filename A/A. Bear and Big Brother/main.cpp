#include <bits/stdc++.h>
using namespace std;

int main() {
  int limak, bob, years = 0;
  cin >> limak >> bob;

  while (!(limak > bob)) {
    limak = limak * 3;
    bob = bob * 2;
    years++;
  }

  cout << years;
}
