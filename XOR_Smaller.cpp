#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int ans = (1 << 30) - 1;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            ans &= x;
        }
        cout << ans << '\n';
    }
    return 0;
}