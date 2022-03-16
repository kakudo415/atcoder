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

char c[5];

int main() {
  cin >> c[0] >> c[1] >> c[2];
  if (c[0] == c[1] && c[1] == c[2]) {
    cout << "Won" << endl;
  } else {
    cout << "Lost" << endl;
  }
}