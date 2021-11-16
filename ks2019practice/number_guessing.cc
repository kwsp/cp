#include <bits/stdc++.h>
using namespace std;

int A, B, N, mid;
string word;

bool solve() {
    cin >> A >> B >> N;
    while (N--) {
        mid = (A+B) / 2;
        cout << mid << endl;
        cin >> word;
        
        if (word == "CORRECT") {
            return true;
        } else if (word == "TOO_SMALL") {
            A = mid + 1;
        } else if (word == "TOO_BIG") {
            B = mid;
        } else {
            return false;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T-- && solve()) {}
}
