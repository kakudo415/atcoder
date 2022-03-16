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
  int n;
  cin >> n;

  set<int> sevens;
  for (int i = 0; i <= n; i++) {
    if ((i - 7) % 10 == 0) {
      sevens.insert(i);
    }
    if ((i / 10 - 7) % 10 == 0) {
      sevens.insert(i);
    }
    if ((i / 100 - 7) % 10 == 0) {
      sevens.insert(i);
    }
    if ((i / 1000 - 7) % 10 == 0) {
      sevens.insert(i);
    }
    if ((i / 10000 - 7) % 10 == 0) {
      sevens.insert(i);
    }
    if ((i / 100000 - 7) % 10 == 0) {
      sevens.insert(i);
    }

    if ((i - 7) % 8 == 0) {
      sevens.insert(i);
    }
    if ((i / 8 - 7) % 8 == 0) {
      sevens.insert(i);
    }
    if ((i / 64 - 7) % 8 == 0) {
      sevens.insert(i);
    }
    if ((i / 512 - 7) % 8 == 0) {
      sevens.insert(i);
    }
    if ((i / 4096 - 7) % 8 == 0) {
      sevens.insert(i);
    }
    if ((i / 32768 - 7) % 8 == 0) {
      sevens.insert(i);
    }
    if ((i / 262144 - 7) % 8 == 0) {
      sevens.insert(i);
    }
  }

  cout << n - sevens.size() << endl;
}