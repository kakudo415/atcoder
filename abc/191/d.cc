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

ld x, y, r;
ll n, ix, iy, ir;

int main() {
  cin >> x >> y >> r;
  ix = x * 10000;
  iy = y * 10000;
  ir = r * 10000;
  for (int i = ceil(x-r); i <= floor(x+r); i++) {
    ld w = sqrt(r*r-(i-x)*(i-x));
    n += floor(y+w) - ceil(y-w) + 1;
  }
  cout << n << endl;
}