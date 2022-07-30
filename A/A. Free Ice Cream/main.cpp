#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, distressedKids = 0;
  long long int count;
  cin >> n >> count;

  for (int i = 0; i < n; i++) {
    char sign;
    int number;
    cin >> sign >> number;

    if (sign == '+') {
      count += number;
    } else if (sign == '-') {
      if (count - number >= 0) {
        count -= number;
      } else {
        distressedKids++;
      }
    }
  };

  cout << count << " " << distressedKids << endl;
}
