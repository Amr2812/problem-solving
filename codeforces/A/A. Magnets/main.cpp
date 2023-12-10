#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string magnets[n];
  int groups = 0;
  vector<string> currentGroup;

  for (int i = 0; i < n; i++) {
    cin >> magnets[i];
  }

  for (int i = 0; i < n; i++) {
    if (magnets[i] == "10") {
      if (magnets[i - 1] == "10" || currentGroup.empty()) {
        currentGroup.push_back(magnets[i]);
      } else if (magnets[i - 1] == "01") {
        groups++;
        currentGroup.clear();
        currentGroup.push_back(magnets[i]);
      }
    } else if (magnets[i] == "01") {
      if (magnets[i - 1] == "01" || currentGroup.empty()) {
        currentGroup.push_back(magnets[i]);
      } else if (magnets[i - 1] == "10") {
        groups++;
        currentGroup.clear();
        currentGroup.push_back(magnets[i]);
      }
    }
  }

  if (!currentGroup.empty()) {
    groups++;
    currentGroup.clear();
  }

  cout << groups;
}
