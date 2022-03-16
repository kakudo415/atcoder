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

int n, x, a[100005];

int main() {
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  string a_;
  for (int i = 0; i < n; i++) {
    if (a[i] != x) {
      a_ += to_string(a[i]) + " ";
    }
  }
  if (a_.size() > 0) {
    cout << a_.erase(a_.size());
  }
  cout << endl;
}