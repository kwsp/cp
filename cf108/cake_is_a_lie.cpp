#include <bits/stdc++.h>
using namespace std;

int n, m, k;

void solve() {
  cin >> n >> m >> k;
  if (n > m) {
    int tmp = n;
    n = m;
    m = tmp;
  }

  int val = n - 1 + n * (m - 1);

  if (val == k)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
