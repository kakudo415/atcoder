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

int a, b, c, d;

int main() {
  cin >> a >> b >> c >> d;
  cout << max(min(b, d) - max(a, c), 0) << endl;
}