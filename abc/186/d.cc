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

int main() {
  ll n, tmp, sum = 0, ans = 0;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    a.push_back(tmp);
    sum += tmp;
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < a.size() - 1; i++) {
    sum -= a[i];
    ans += sum - a[i] * (a.size() - (i+1));
  }

  cout << ans << endl;
}