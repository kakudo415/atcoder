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

int n, x, v[1003], p[1003], sum = 0;

int main() {
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    cin >> v[i] >> p[i];
  }

  for (int i = 0; i < n; i++) {
    sum += v[i] * p[i];
    if (sum > x * 100) {
      cout << (i+1) << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}