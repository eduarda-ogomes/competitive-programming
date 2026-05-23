#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> p, r;

    DSU(int n) {
        p.resize(n);
        r.assign(n, 0);
        iota(p.begin(), p.end(), 0);
    }

    int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return;

        if (r[a] < r[b]) swap(a, b);
        p[b] = a;
        if (r[a] == r[b]) r[a]++;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, D;
    cin >> n >> q >> D;

    vector<pair<long long,long long>> pt(n);
    for (auto &p : pt) cin >> p.first >> p.second;

    DSU dsu(n);

    // grid com célula de tamanho D+1 (seguro pra evitar colisão)
    unordered_map<long long, vector<int>> grid;

    auto key = [&](long long x, long long y) {
        return (x << 32) ^ y;
    };

    auto gx = [&](long long x) { return x / (D + 1); };
    auto gy = [&](long long y) { return y / (D + 1); };

    auto dist2 = [&](int i, int j) {
        long long dx = pt[i].first - pt[j].first;
        long long dy = pt[i].second - pt[j].second;
        return dx*dx + dy*dy;
    };

    long long D2 = 1LL * D * D;

    for (int i = 0; i < n; i++) {
        long long cx = gx(pt[i].first);
        long long cy = gy(pt[i].second);

        // checa vizinhos da célula
        for (long long dx = -1; dx <= 1; dx++) {
            for (long long dy = -1; dy <= 1; dy++) {
                long long nk = key(cx + dx, cy + dy);
                if (grid.count(nk)) {
                    for (int j : grid[nk]) {
                        if (dist2(i, j) <= D2)
                            dsu.unite(i, j);
                    }
                }
            }
        }

        grid[key(cx, cy)].push_back(i);
    }

    while (q--) {
        int s, t;
        cin >> s >> t;
        s--; t--;

        if (dsu.find(s) == dsu.find(t))
            cout << "S\n";
        else
            cout << "N\n";
    }

    return 0;
}