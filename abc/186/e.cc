#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

using ll = long long;
using ld = long double;

const ld pi = 3.141592653589793;

ll solve(n, s, k) {
  ll g = gcd(n, k);
  ll l = lcm(n, k);
  // 行けない
  if (s % g != 0) {
    return -1;
  }
  // その周回で行ける
  if ((n - s) % k == 0) {
    return (n - s) / k;
  }
  // その周回で行けないが、そのうち行ける

}

int main() {
  ll t, n[102], s[102], k[102];
  cin >> t;
  for (int i = 0; i < n; i++) {
    cin >> n[i] >> s[i] >> k[i];
    cout << solve(n[i], s[i], k[i]) << endl;
  }
}