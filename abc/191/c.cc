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

int h, w, n;
bool s[11][11];
int start[2];

int main() {
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char tmp;
      cin >> tmp;
      if (tmp == '#') {
        s[i][j] = true;
        start[0] = i+1;
        start[1] = j+1;
      }
    }
  }

  int coord[2];
  coord[0] = start[0];
  coord[1] = start[1];
  while (true) {
    if (coord[0] == start[0] && coord[1] == start[1]) {
      break;
    }
  }
}