#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double R[4];
    cin >> R[1] >> R[2] >> R[3];

    int N, Q;
    cin >> N >> Q;

    // Nó (c, l) → índice c*N + l  (c de 1..3, l de 0..N-1)
    // Usamos l de 0..N-1 internamente
    auto id = [&](int c, int l) { return (c-1)*N + l; };

    int total = 3 * N;
    vector<vector<pair<int,double>>> adj(total);

    double angle = 2.0 * PI / N;

    for(int c = 1; c <= 3; c++){
        for(int l = 0; l < N; l++){
            // arco para próxima linha no mesmo círculo
            int nxt = (l + 1) % N;
            double arc = R[c] * angle;
            adj[id(c,l)].push_back({id(c, nxt), arc});
            adj[id(c, nxt)].push_back({id(c, l), arc});

            // radial para círculo adjacente, mesma linha
            if(c < 3){
                double rad = R[c+1] - R[c];
                adj[id(c,l)].push_back({id(c+1, l), rad});
                adj[id(c+1,l)].push_back({id(c, l), rad});
            }
        }
    }

    // Dijkstra a partir de src
    auto dijkstra = [&](int src) {
        vector<double> dist(total, 1e18);
        priority_queue<pair<double,int>, vector<pair<double,int>>, greater<>> pq;
        dist[src] = 0;
        pq.push({0, src});
        while(!pq.empty()){
            auto [d, u] = pq.top(); pq.pop();
            if(d > dist[u]) continue;
            for(auto [v, w] : adj[u]){
                if(dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    };

    // Pré-computa Dijkstra a partir de (c, linha 0) para cada círculo
    // Usa simetria: dist entre (C1,L1) e (C2,L2) = dist entre (C1,0) e (C2, d)
    // onde d = min(|L1-L2|, N-|L1-L2|)
    vector<vector<double>> precomp(4);
    for(int c = 1; c <= 3; c++){
        precomp[c] = dijkstra(id(c, 0));
    }

    cout << fixed << setprecision(10);

    while(Q--){
        int C1, L1, C2, L2;
        cin >> C1 >> L1 >> C2 >> L2;
        L1--; L2--; // 0-based

        int diff = abs(L1 - L2);
        int d = min(diff, N - diff);

        // dist de (C1, 0) até (C2, d)
        cout << precomp[C1][id(C2, d)] << "\n";
    }

    return 0;
}