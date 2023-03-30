#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int s, n, t;
  long long pe = 1;

  cin >> t;
  vector<int> count(10), ans(101);

  while (t--) {

    cin >> s >> n;
    fill(count.begin(), count.end(), 0);
    fill(ans.begin(), ans.begin() + n, 0);

    int cover = 0;
    for (int i = 9, x = 1000000000; i >= 0; --i, x /= 10) {
      count[i] = min(9 * n, (int)(s / x));
      s -= x * count[i];
      cover += count[i];

      if (s < n - cover) {
        int t = (n - cover - s + x - 2) / (x - 1);
        s += t * x;
        count[i] -= t;
        cover -= t;
      }
      //  while(s < n - cover){
      //     s += x;
      //     count[i]--;
      //     --cover;
      //  }
    }
    int id = 0;
    for (int i = 0, x = 1; i < 10; ++i, x *= 10) {
      if (id >= n) {
        for (int k = 0; k < count[i] / 9; ++k) {
          ans[k] += 9 * x;
        }
        ans[count[i] / 9] += count[i] % 9 * x;
      }
      else {
        while (count[i]--) {
          ans[id % n] += x;
          ++id;
        }
      }
    }

    for (int i = 0; i < n; ++i) {
      cout << ans[i] << " ";
    }
    cout << endl;

  }


  return 0;
}