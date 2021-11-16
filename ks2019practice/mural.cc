#include <bits/stdc++.h>
using namespace std;

int T, N;

void solve(int caseIdx) {
  cin >> N;
  vector<int> arr(N);
  string word;
  cin >> word;
  for (int i=0; i<N; i++) {
    arr[i] = word[i] - '0';
  }


  int y=0;
  int n2 = std::ceil((float)N/2);

  int currSum = 0;
  for (int i=0; i<n2; i++) {
    currSum += arr[i];
  }
  y = currSum;

  for (int i=0; i<n2; i++) {
    currSum = currSum - arr[i] + arr[i+n2];
    y = std::max(y, currSum);
  }

  cout << "Case #" << caseIdx << ": " << y << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> T;
  for (int i=1; i<=T; i++) {
    solve(i);
  }
}
