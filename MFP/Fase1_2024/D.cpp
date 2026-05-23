#include <bits/stdc++.h>
using namespace std;

static const long long NEG = -(1LL << 60);

int n, K;
vector<long long> val;
vector<vector<int>> g;

vector<vector<long long>> dp;

void dfs(int u, int p) {
    dp[u].assign(K + 1, NEG);
    dp[u][0] = 0;
    dp[u][1] = val[u];

    for (int v : g[u]) {
        if (v == p) continue;

        dfs(v, u);

        vector<long long> ndp(K + 1, NEG);

        for (int i = 0; i <= K; i++) {
            if (dp[u][i] == NEG) continue;

            for (int j = 0; i + j <= K; j++) {
                if (dp[v][j] == NEG) continue;

                ndp[i + j] = max(ndp[i + j], dp[u][i] + dp[v][j]);
            }
        }

        dp[u] = ndp;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> K;

    val.assign(n + 1, 0);
    g.assign(n + 1, {});

    for (int i = 2; i <= n; i++) cin >> val[i];

    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;
        g[p].push_back(i);
    }

    dp.assign(n + 1, {});

    dfs(1, -1);

    long long ans = dp[1][K];

    if (ans < 0) cout << 0 << "\n";
    else cout << ans << "\n";

    return 0;
}