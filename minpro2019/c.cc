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

ll k, a, b;
ll ans = 1;

int main() {
  cin >> k >> a >> b;

  if (b > 1 * (a - 1 + 2)) {
    if ((a - 1 + 2) > k) {
      cout << 1 + k << endl;
      return 0;
    }
    ans = b;
    k -= (a - 1 + 2);
  }
  cout << ans << endl;

  if (b > 1 * (a + 2)) {
    ans += b * (k / (a + 2));
    k = k % (a + 2);
  }
  cout << ans << endl;

  ans += k;

  cout << ans << endl;
  
  // ans = 1 + k;
  
  // if ((b - a) > 1 * ((a - 1) + 2)) {
  //   int k_after_first = k - ((a - 1) + 2);
  //   ans = 1 + (b - a) + k_after_first;
  // }

  // if ((b - a) > 1 * (a + 2)) {
  //   int k_after_first = k - ((a - 1) + 2);
  //   ans = 1 + (b - a)  + (b - a) * (k_after_first / (a + 2)) + (k_after_first % (a + 2));
  // }

  // cout << ans << endl;

  // int ct = a; // turns to change
  // if ((b - a) <= 1 * (a - 1)) {
  //   cout << 1 + k << endl;
  //   return 0;
  // }

  // if ((b - a) <= 1 * a) {
  //   cout << 1 + k << endl;
  // }

  // if ((ct - 1) > k) {
  //   cout << 1 + k << endl;
  // }
}