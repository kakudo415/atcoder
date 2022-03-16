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

string a, b, c;

int main() {
  cin >> a >> b >> c;
  if (a[a.length()-1] == b[0] && b[b.length()-1] == c[0]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}