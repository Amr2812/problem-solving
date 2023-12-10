#include <bits/stdc++.h>
using namespace std;

int main() {
  int wiresNum, shotsNum;
  cin >> wiresNum;

  int wires[wiresNum];
  for (int i = 0; i < wiresNum; i++) {
    cin >> wires[i];
  }

  cin >> shotsNum;

  int shots[shotsNum][2];
  for (int i = 0; i < shotsNum; i++) {
    cin >> shots[i][0] >> shots[i][1];
  }

  for (int i = 0; i < shotsNum; i++) {
    int wire = wires[shots[i][0] - 1];
    int bird = shots[i][1];
    int birdsToRight = wire - bird;
    int birdsToLeft = (bird - 1);

    wires[(shots[i][0] - 1) + 1] += birdsToRight;
    wires[(shots[i][0] - 1) - 1] += birdsToLeft;
    wires[(shots[i][0] - 1)] = 0;
  }

  for (int wire : wires) {
    cout << wire << endl;
  }
}
