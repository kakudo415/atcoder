#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

using ll = long long;
using ld = long double;

const ld pi = 3.141592653589793;

int n;
double x[11], y[11], d[11][11], sum;

int factorial(int n) {
  if (n == 1 || n == 0) {
    return 1;
  }
  return n * factorial(n-1);
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      double xd = x[i] - x[j];
      double yd = y[i] - y[j];
      d[i][j] = sqrt(xd*xd + yd*yd);
    }
  }

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     cout << fixed << setw(8) << d[i][j] << " ";
  //   }
  //   cout << endl;
  // }


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      }
      sum += d[i][j];
    }
  }

  cout << fixed << setprecision(10) << sum * factorial(n-2) * (n-1) / factorial(n) << endl;
}