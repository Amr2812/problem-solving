#include <bits/stdc++.h>
using namespace std;

int main() {
  string letters;
  getline(cin, letters);

  set<char> distinct;
  for (int i = 0; i < letters.size(); i++) {
    distinct.insert(letters[i]);
  }

  if (distinct.size() == 2) {
    cout << 0;
  } else if (distinct.size() == 3) {
    cout << 1;
  } else {
    cout << distinct.size() - 4;
  }
}
