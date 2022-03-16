#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

using ll = long long;
using ld = long double;

const ld pi = 3.141592653589793;

ll answer;
string s;

int main() {
  cin >> s;

  int o = 0;
  int x = 0;
  int hatena = 0;
  for (int i = 0; i < 10; i++) {
    if (s[i] == 'o') {
      o++;
    }
    if (s[i] == 'x') {
      x++;
    }
    if (s[i] == '?') {
      hatena++;
    }
  }

  for (int bit = 0; bit < (1 << hatena); bit++) {
    int chars = o;
    for (int i = 0; i < 10; i++) {
      if (bit & (1 << i)) {
        // cout << 'o';
        chars++;
      } else {
        // cout << 'x';
      }
    }
    // cout << endl;
    if (chars > 4) {
      continue;
    }
    if (chars == 4) {
      // answer += 256 - (81 - 14) - 14;
      answer += 4 * 3 * 2 * 1;
      continue;
    }
    if (chars == 3) {
      // answer += 3 * 3 * 3 * 3 - 3 * (2 * 2 * 2 * 2);
      answer += 81 - 3 * (16 - 2) - 3 * 1;
      continue;
    }
    if (chars == 2) {
      // answer += 2 * 2 * 2 * 2 - 2;
      answer += 16 - 2;
      continue;
    }
    if (chars == 1) {
      answer += 1;
    }
  }

  cout << answer << endl;
}