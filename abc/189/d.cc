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

ll n, sum[2], c = 0;
string s[61];

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sum[0] = 1;
  sum[1] = 1;
  for (int i = 0; i < n; i++) {
    if (s[i] == "AND") {
      sum[0] = sum[0] * 2 + sum[1];
      sum[1] = sum[1];
    }
    if (s[i] == "OR") {
      sum[0] = sum[0];
      sum[1] = sum[0] + sum[1] * 2;
    }
    // cout << sum[0] << " " << sum[1] << endl;
  }
  cout << sum[1] << endl;
}