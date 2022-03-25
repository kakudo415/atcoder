#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

using ll = long long;
using ld = long double;

#define range(i, b, e) for (ll i = (b); i < (e); i++)
#define rep(i, e) for (int i = 0; i < (e); i++)
#define loop while (true)

const ld pi = 3.141592653589793;

void solve() {
  ll l, r;
  cin >> l >> r;

  ll w = r - l;
  loop {
    range(x, l, r - w + 1) {
      ll y = x + w;
      if (gcd(x, y) == 1) {
        cout << w << endl;
        return;
      }
    }
    w--;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  cout << fixed << setprecision(16);
  solve();
}