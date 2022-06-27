#include <bits/stdc++.h>
using namespace std;

int main() {
  string word;
  cin >> word;

  int upper = 0;
  int lower = 0;

  for (int i = 0; i < word.size(); i++) {
    char letter = word[i];
    if (tolower(letter) == letter) {
      lower++;
    } else {
      upper++;
    }
  }

  for (int i = 0; i < word.size(); i++) {
    if (lower > upper || lower == upper) {
      word[i] = tolower(word[i]);
    } else if (lower < upper) {
      word[i] = toupper(word[i]);
    }
  }

  cout << word;
}
