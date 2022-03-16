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
vector<string> s;

bool sakasama_jisho(const string &l, const string &r) {
  if (l.empty()) {
    return true;
  }
  if (r.empty()) {
    return false;
  }
  if (l[l.size()-1] == r[r.size()-1]) {
    return sakasama_jisho(l.substr(0, l.size()-1), r.substr(0, r.size()-1));
  }
  return l[l.size()-1] < r[r.size()-1];
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    s.push_back(tmp);
  }

  sort(s.begin(), s.end(), sakasama_jisho);
  for (auto i = s.begin(); i != s.end(); i++) {
    cout << *i << endl;
  }
}