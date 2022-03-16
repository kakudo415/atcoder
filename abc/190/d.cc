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

int main() {
  ll n, ans = 0;
  cin >> n;

  for (ll i = 1; i < 3000000; i++) { // iは足す個数
    if ((2*n - i*i) % i == 0) {
      if ((((2*n - i*i) / i) + 1) % 2 == 0) {
        ll s = ((2*n - i*i) / i + 1) / 2;
        ll e = s + i - 1;
        if (n == (s+e)*i/2 && s > 0) {
          // cout << "[" << ((2*n - i*i) / i + 1) / 2 << ", " << ((2*n - i*i) / i + 1) / 2 + i - 1 << "]" << endl;
          ans += 2;
        }
      }
    }
  }

  cout << ans << endl;
}