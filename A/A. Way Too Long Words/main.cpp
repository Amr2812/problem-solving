#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> words;
  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;
    words.push_back(word);
  }

  vector<string> results;
  for (int i = 0; i < n; i++) {
    string result = words[i];
    if (words[i].size() > 10) {
      result = words[i][0] + to_string(words[i].size() - 2) +
               words[i][words[i].size() - 1];
    }
    results.push_back(result);
  }

  for (int i = 0; i < n; i++) {
    cout << results[i] << endl;
  }
}
