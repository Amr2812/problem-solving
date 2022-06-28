#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> cards;
  int player1 = 0;
  int player2 = 0;

  for (int i = 0; i < n; i++) {
    int card;
    cin >> card;
    cards.push_back(card);
  }

  for (int i = 0; i < n; i++) {
    if (cards.front() > cards.back()) {
      if (i % 2 == 0) {
        player1 += cards.front();
      } else {
        player2 += cards.front();
      }
      cards.erase(cards.begin());
    } else {
      if (i % 2 == 0) {
        player1 += cards.back();
      } else {
        player2 += cards.back();
      }
      cards.pop_back();
    }
  }

  cout << player1 << endl;
  cout << player2 << endl;
}
