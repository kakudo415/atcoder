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

ll x;

int main() {
  cin >> x;
  cout << 1000 * (x / 500) + 5 * ((x % 500) / 5) << endl;
}