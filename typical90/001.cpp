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
#define rrange(i, b, e) for (ll i = (b); i > (e); i--)
#define rep(i, e) range(i, 0, e)
#define rrep(i, e) rrange(i, e, 0)
#define loop while (true)

const ld pi = 3.141592653589793;

int N, L, K, A[100005];

void solve() {
  cin >> N >> L >> K;
  A[0] = 0;
  rep(i, N) cin >> A[i + 1];
  A[N + 1] = L;

  rrange(w, L / (K + 1), 0) {
    int b = 0, Kc = 0;
    rep(e, N + 2) {
      if (A[e] - A[b] >= w) {
        b = e;
        Kc++;
      }
    }
    if (Kc >= K + 1) {
      cout << w << endl;
      return;
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  cout << fixed << setprecision(16);
  solve();
}