#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, maximum, d, juicerVol = 0, emptyTimes = 0;
  cin >> n >> maximum >> d;

  int sizes[n];
  for (int i = 0; i < n; i++) {
    cin >> sizes[i];
  }

  for (int i = 0; i < n; i++) {
    if (sizes[i] <= maximum) {
      juicerVol += sizes[i];
    }
    if (juicerVol > d) {
      juicerVol = 0;
      emptyTimes += 1;
    }
  }

  cout << emptyTimes;
}
