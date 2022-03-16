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

int n, q;
ll a[100005], k[10005], diff[100005], sumdiff[100005];
vector<ll> ks;
map<ll, ll> ans;

int main() {
  cin >> n >> q;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    diff[i] = a[i] - a[i-1] - 1;
    sumdiff[i] = diff[i] + sumdiff[i-1];
  }

  for (int i = 0; i < q; i++) {
    cin >> k[i];
    ks.push_back(k[i]);
  }
  sort(ks.begin(), ks.end());

  for (auto i = ks.begin(); i != ks.end(); i++) {
    ll end = *i; // end個目まで
    int ip = 1;
    if (sumdiff[n] < end) {
      ans[end] = a[n] + (end - sumdiff[n]);
      continue;
    }
    while (end > sumdiff[ip]) {
      ip++;
    }
    ans[end] = a[ip-1] + (end - sumdiff[ip-1]);
  }

  // cout << endl;
  // for (int i = 0; i <= n; i++) {
  //   cout << a[i] << " " << diff[i] << " " << sumdiff[i] << endl;
  // }
  // cout << endl;

  for (int i = 0; i < q; i++) {
    cout << ans[k[i]] << endl;
  }
}