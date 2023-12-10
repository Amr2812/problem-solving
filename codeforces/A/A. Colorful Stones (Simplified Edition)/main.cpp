#include <bits/stdc++.h>
using namespace std;

int main() {
  string stones, instructions;
  int currentStone = 0;
  cin >> stones;
  cin >> instructions;

  for (int i = 0; i < instructions.size(); i++) {
    if (stones[currentStone] == instructions[i]) currentStone += 1;
  }

  cout << currentStone + 1;
}
