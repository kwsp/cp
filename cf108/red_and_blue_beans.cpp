#include <bits/stdc++.h>
using namespace std;

int r, b, d;

void solve() { 
  cin >> r >> b >> d; 
  int minv = min(r, b);
  int diff = abs(r - b);
  if ((float)diff / minv > d) 
    cout << "NO\n";
  else
    cout << "YES\n";
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
