#include <bits/stdc++.h>
using namespace std;

int n, u[200000], s[200000];

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> u[i];

  for (int i = 0; i < n; i++)
    cin >> s[i];

  // n universities
  map<int, vector<int>> uni;
  for (int i = 0; i < n; i++) {
    if (uni.find(u[i]) == uni.end()) {
      uni[u[i]] = vector<int>({s[i]});
    } else
      uni[u[i]].push_back(s[i]);
  }

  vector<int> res(n, 0);
  for (auto &it : uni) {
    auto &univ = it.second;
    sort(univ.begin(), univ.end(), greater<int>());

    // partial sum
    int rsum = 0;
    vector<int> sums(univ.size());
    for (int j = 0; j < univ.size(); ++j) {
      rsum += univ[j];
      sums[j] += rsum;
    }

    // sol
    for (int i = 0; i < univ.size(); ++i) {
      int total_players = (univ.size() - univ.size() % (i+1));
      res[i] += sums[total_players-1];
    }
  }

  for (int j = 0; j < n; ++j) {
    cout << res[j] << " ";
  }
  cout << "\n";
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
