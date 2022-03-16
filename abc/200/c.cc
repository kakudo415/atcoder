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
  ll n, a, answer = 0;
  map<ll, ll> count;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    a %= 200;
    count[a]++;
  }

  for (auto i = count.begin(); i != count.end(); i++) {
      answer += (i->second) * (i->second - 1) / 2;
  }

  cout << answer << endl;
}