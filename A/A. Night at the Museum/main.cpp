#include <bits/stdc++.h>
using namespace std;

int main() {
  string name;
  cin >> name;

  int currentLetter = 'a';
  int rotations = 0;
  for (int i = 0; i < name.size(); i++) {
    char letter = name[i];
    int ascii = letter;
    rotations += min(abs(ascii - currentLetter), 26 - abs(ascii - currentLetter));
    currentLetter = ascii;
  }

  cout << rotations;
}
