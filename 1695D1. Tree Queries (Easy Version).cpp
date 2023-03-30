#include<bits/stdc++.h>
using namespace std;
template<typename T1, typename T2>
istream& operator>>(istream& ins,
  pair<T1, T2>& v) {
  ins >> v.first >> v.second;
  return ins;
}

template<typename T, size_t N>
istream& operator>>(istream& ins,
  array<T, N>& v) {
  for (int i = 0; i < int(N); i++) cin >> v[i];
  return ins;
}

template<typename T>
istream& operator>>(istream& ins,
  vector<T>& v) {
  for (int i = 0; i < int(v.size()); i++) ins >> v[i];
  return ins;
}
const int N = 2050;
vector<int> edges[N];

int dfs1(int x, int fa) {
  int cnt = 0;
  int ret = 0;
  for (int i = 0; i < edges[x].size(); i++) {
    int y = edges[x][i];
    if (y == fa) continue;
    int res = dfs1(y, x);
    if (!res) ++cnt;
    else ret += res;
  }

  if (cnt) {
    ret += cnt - 1;
  }

  return ret;
}


void init(int n) {
  for (int i = 1; i <= n; i++) {
    edges[i].clear();
  }
}
void solve() {

  int n;
  cin >> n;
  init(n);

  for (int i = 1; i < n; i++) {
    int x, y;
    cin >> x >> y;
    edges[x].push_back(y);
    edges[y].push_back(x);
  }

  if (n == 1) {
    cout << "0\n";
    return;
  }

  int ans = n + 1;

  cout << dfs(1, 0) << endl;

  cout << max(ans, 1) << "\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}