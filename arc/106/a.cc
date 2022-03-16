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

ll n;

ll p(ll a, ll b) {
  if (b == 0) {
    return 1;
  }
  if (b == 1) {
    return a;
  }
  return a * p(a, b-1);
}

int main() {
  cin >> n;
  for (int i = 1; i < 38; i++) {
    for (int j = 1; j < 26; j++) {
      if (p(3, i) + p(5, j) == n) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
}