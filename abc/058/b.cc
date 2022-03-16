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

string o, e;

int main() {
  cin >> o >> e;
  for (int i = 0; i < o.length(); i++) {
    cout << o[i];
    if (i < e.length()) {
      cout << e[i];
    }
  }
  cout << endl;
}