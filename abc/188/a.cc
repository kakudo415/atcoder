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

int x, y;

int main() {
  cin >> x >> y;
  if (x > y) {
    int tmp = y;
    y = x;
    x = tmp;
  }

  if (x + 3 > y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}