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
const int N = 500005;


void solve() {
  int n;
  cin >> n;
  int cnt = 0;
  vector<int> a, b;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x) a.push_back(x);
    else cnt++;
  }

  while (a.size() > 1) {
    int cnt2 = 0;
    if (cnt) {
      cnt2 = cnt - 1;
      b.push_back(a[0]);
    }

    for (int i = 1; i < a.size(); i++) {
      int x = a[i] - a[i - 1];
      if (x) b.push_back(x);
      else cnt2++;
    }

    sort(b.begin(), b.end());
    swap(a, b);
    b.clear();
    cnt = cnt2;
  }
  if (a.size() == 0) a.push_back(0);
  cout << a[0] << "\n";
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