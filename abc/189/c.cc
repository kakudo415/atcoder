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

ll n, a[10004], sum = 0;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    int x = a[i];
    for (int j = i; j < n; j++) {
      if (x > a[j]) {
        x = a[j];
      }

      if (sum < x * (j - i + 1)) {
        sum = x * (j - i + 1);
      }
    }
  }

  cout << sum << endl;
}