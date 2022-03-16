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
  int n, m, a[102], b[102], k, c[102], d[102], ans = 0;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
  }
  cin >> k;
  for (int i = 0; i < k; i++) {
    cin >> c[i] >> d[i];
  }

  for (int bits = 0; bits < (1<<k); bits++) { // <65536
    int sum = 0;
    vector<bool> dishes(n+1, false);
    for (int i = 0; i < k; i++) {
      if (bits & (1<<i)) {
        dishes[c[i]] = true;
      } else {
        dishes[d[i]] = true;
      }
    }
    for (int i = 0; i < m; i++) {
      if (dishes[a[i]] && dishes[b[i]]) {
        sum++;
      }
    }
    ans = max(ans, sum);
  }

  cout << ans << endl;
}