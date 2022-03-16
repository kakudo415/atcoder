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
  int n, s, d, x[102], y[102];
  bool can = false;
  cin >> n >> s >> d;
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
    if ((x[i] < s) && (y[i] > d)) {
      can = true;
    }
  }

  if (can) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}