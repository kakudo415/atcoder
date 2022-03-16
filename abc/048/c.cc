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

int n, x, a[100005], b[100005], ans;

int main() {
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i < n; i++) {
    b[i] = a[i-1] + a[i];
  }

  if (n == 2) {
    cout << a[0] + a[1] - x << endl;
    return 0;
  }

  for (int i = 2; i < n; i++) {
    
  }

  cout << ans << endl;
}