// Pattern: (Prefix sum)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1'000'000'007;

int norm(int x) { return ((x % MOD) + MOD) % MOD; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> P(n + 1, 0);
    for (int i = 1; i <= n; i++) P[i] = norm(P[i - 1] + a[i]);

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int ans = norm(P[r] - P[l - 1]);

        cout << ans << '\n';
    }
}
