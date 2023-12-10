#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> nums;
  for (auto num : s) {
    if (num != '+') {
      nums.push_back(num - '0');
    }
  }

  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size(); i++) {
    if (i != 0) cout << "+";
    cout << nums[i];
  }
}
