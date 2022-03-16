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

int a1, a2, a3;

int main() {
  cin >> a1 >> a2 >> a3;
  if (a3 - a2 == a2 - a1) { // 3 2 1
    cout << "Yes" << endl;
    return 0;
  }
  if (a3 - a1 == a1 - a2) { // 3 1 2
    cout << "Yes" << endl;
    return 0;
  }
  if (a2 - a3 == a3 - a1) { // 2 3 1
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
}