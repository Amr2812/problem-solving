#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> cards;
  int player1 = 0, player2 = 0;

  for (int i = 0; i < n; i++) {
    int card;
    cin >> card;
    cards.push_back(card);
  }

  for (int i = 0; i < n; i++) {
    int *playersTurn = &player1;
    if (i % 2 != 0) playersTurn = &player2;

    if (cards.front() > cards.back()) {
      *playersTurn += cards.front();
      cards.erase(cards.begin());
    } else {
      *playersTurn += cards.back();
      cards.pop_back();
    }
  }

  cout << player1 << " " << player2 << endl;
}
