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
ll a[100005], k[10005], sumdiff[100005];
vector<ll> ks;
map<ll, ll> ans;

int main() {
  cin >> n >> q;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i >= 1) {
      sumdiff[i] = a[i] - a[i-1] - 1;
    }
    if (i >= 2) {
      sumdiff[i] += sumdiff[i-1];
    }
  }
  for (int i = 0; i < q; i++) {
    cin >> k[i];
    ks.push_back(k[i]);
  }

  // 
  for (int i = 0; i < n; i++) {
    cout << sumdiff[i] << " ";
  }
  cout << endl;
  // 

  sort(ks.begin(), ks.end());

  int pos = 1;
  for (auto i = ks.begin(); i != ks.end(); i++) {
    ll end = *i; // *i個目まで
    int ip = 1;
    while (end <= sumdiff[ip]) {
      break;
      ip++;
    }
    ans[end] = a[ip-1] + end - sumdiff[ip-1];
  }

  for (int i = 0; i < n; i++) {
    cout << ans[k[i]] << endl;
  }
}