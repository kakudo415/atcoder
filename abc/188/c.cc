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

int n;

int solve(vector<pair<int, int>> a) {
  if (a.size() == 2) {
    if (a[0].second > a[1].second) {
      return a[1].first;
    }
    if (a[0].second < a[1].second) {
      return a[0].first;
    }
  }
  vector<pair<int, int>> b;
  for (int i = 0; i < a.size(); i += 2) {
    if (a[i].second > a[i+1].second) {
      b.push_back(a[i]);
    }
    if (a[i].second < a[i+1].second) {
      b.push_back(a[i+1]);
    }
  }
  return solve(b);
}

int main() {
  cin >> n;
  int m = pow(2, n);
  vector<pair<int, int>> a;
  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    a.push_back(make_pair(i, tmp));
  }
  cout << solve(a) + 1 << endl;
}

// 要素数を指定してvectorを作ると初期値でその長さ分埋められていることを忘れるな！push_back()するとそのあとに伸びるぞ！
