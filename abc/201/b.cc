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

int n, t[1003];
string s[1003];

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
    if (t[1000] < t[i]) {
      t[1001] = t[1000];
      s[1001] = s[1000];
      t[1000] = t[i];
      s[1000] = s[i];
    } else if (t[1001] < t[i]) {
      t[1001] = t[i];
      s[1001] = s[i];
    }
  }

  cout << s[1001] << endl;
}