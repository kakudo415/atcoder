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

ll a, b, c;

int main() {
  cin >> a >> b >> c;
  if (c % 2 == 0) {
    if (abs(a) < abs(b)) {
      cout << "<" << endl;
    }
    if (abs(a) > abs(b)) {
      cout << ">" << endl;
    }
    if (abs(a) == abs(b)) {
      cout << "=" << endl;
    }
  } else {
    if (a < b) {
      cout << "<" << endl;
    }
    if (a > b) {
      cout << ">" << endl;
    }
    if (a == b) {
      cout << "=" << endl;
    }
  }
}