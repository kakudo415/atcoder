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
  int a, b, c;
  cin >> a >> b >> c;
  if (c) {
    if (a >= b) {
      cout << "Takahashi" << endl;
    } else {
      cout << "Aoki" << endl;
    }
  } else {
    if (a <= b) {
      cout << "Aoki" << endl;
    } else {
      cout << "Takahashi" << endl;
    }
  }
}