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

int v, t , s, d;

int main() {
  cin >> v >> t >> s >> d;
  if (v*t <= d && d <= v*s) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}