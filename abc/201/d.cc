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

int h, w;
int masu[2003][2003];
ll dp[2003][2003];

int main() {
  cin >> h >> w;

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      char tmp;
      cin >> tmp;
      tmp == '+' ? masu[i][j] = 1 : masu[i][j] = -1;
    }
  }

  if (h + w - 2 == 0) {
    cout << "Draw" << endl;
    return 0;
  }

  for (int i = h; i >= 1; i--) {
    for (int j = w; j >= 1; j--) {
      if (i == h && j == w) {
        continue;
      }

      if (i == h) {
        if ((i+j)%2 == 0) {
          dp[i][j] = dp[i][j+1] + masu[i][j+1];
        } else {
          dp[i][j] = dp[i][j+1] - masu[i][j+1];
        }
        continue;
      }

      if (j == w) {
        if ((i+j)%2 == 0) {
          dp[i][j] = dp[i+1][j] + masu[i+1][j];
        } else {
          dp[i][j] = dp[i+1][j] - masu[i+1][j];
        }
        continue;
      }

      if ((i+j)%2 == 0) {
        dp[i][j] = max(dp[i+1][j] + masu[i+1][j], dp[i][j+1] + masu[i][j+1]);
      } else {
        dp[i][j] = min(dp[i+1][j] - masu[i+1][j], dp[i][j+1] - masu[i][j+1]);
      }
    }
  }

  // for (int i = 1; i <= h; i++) {
  //   for (int j = 1; j <= w; j++) {
  //     cout << dp[i][j] << ' ';
  //   }
  //   cout << endl;
  // }

  if (dp[1][1] > 0) {
    cout << "Takahashi" << endl;
  } else if (dp[1][1] == 0) {
    cout << "Draw" << endl;
  } else if (dp[1][1] < 0) {
    cout << "Aoki" << endl;
  }
}

// 動く前にそのマスにいれば得られる最大得失点差（高橋君視点）

// t a t
// a t a
// t a t

//  2  3  2
// -1  2  1
//  0  1  0