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

int n, a[1003];
bool ae[1003];

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (ae[a[i]]) {
      cout << "No" << endl;
      return 0;
    } else {
      ae[a[i]] = true;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (!ae[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}