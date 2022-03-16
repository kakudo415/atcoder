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

ll n, a[202];
ll p[202];

int main() {
  cin >> n;
  for (int i = 0; i < 201; i++) {
    p[i] = -1;
  }
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] %= 200;
  }
  
  p[0] = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 200; j >= 0; j--) {
      if (p[j] != -1) {
        if (a[j+i]) {}
      }
    }
  }
}