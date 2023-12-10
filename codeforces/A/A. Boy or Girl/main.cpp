#include <bits/stdc++.h>
using namespace std;

int main () {
  string name;
  cin >> name;

  vector<char> distinctName;
  for (int i = 0; i < name.size(); i++) {
    bool found = false;
    for (int j = 0; j < distinctName.size(); j++) {
      if (name[i] == distinctName[j]) {
        found = true;
        break;
      }
    }

    if (!found) {
      distinctName.push_back(name[i]); 
    }
  }

  if (distinctName.size() % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
}
