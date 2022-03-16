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

int main() {
  cin >> n >> q;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    sumdiff[i] += (a[i] - a[i-1] - 1) + sumdiff[i-1];
  }

  for (int i = 0; i < q; i++) {
    cin >> k[i];
  }

  for (int i = 0; i < q; i++) {
    ll end = k[i]; // end個目まで
    if (sumdiff[n] < end) {
      cout << a[n] + (end - sumdiff[n]) << endl;
    }
    int ip = 1;
    while (end > sumdiff[ip]) {
      cout << ip << endl;
      ip++;
    }
    cout << a[ip-1] + (end - sumdiff[ip-1]) << endl;
  }

  cout << endl;
  for (int i = 0; i <= n; i++) {
    cout << a[i] << " " << sumdiff[i] << endl;
  }
  cout << endl;
}