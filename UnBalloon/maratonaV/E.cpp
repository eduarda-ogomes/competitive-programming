#include <bits/stdc++.h>
using namespace std;

const int MAX = 200005;
const int LOG = 20;  // 2^20 > 10^6

struct Aresta {
    int u, v;
    long long w;
    int id;
};

// DSU (Union-Find)
int pai[MAX], tam[MAX];

int find(int x) {
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if(a == b) return;
    if(tam[a] < tam[b]) swap(a, b);
    pai[b] = a;
    tam[a] += tam[b];
}

// Grafo da MST
vector<pair<int, long long>> tree[MAX];

// LCA
int depth[MAX];
int up[LOG][MAX];
long long max_edge[LOG][MAX];

void dfs(int u, int p, long long peso) {
    up[0][u] = p;
    max_edge[0][u] = peso;
    
    for(int i = 1; i < LOG; i++) {
        up[i][u] = up[i-1][up[i-1][u]];
        max_edge[i][u] = max(max_edge[i-1][u], max_edge[i-1][up[i-1][u]]);
    }
    
    for(auto [v, w] : tree[u]) {
        if(v != p) {
            depth[v] = depth[u] + 1;
            dfs(v, u, w);
        }
    }
}

long long query_max_edge(int u, int v) {
    if(depth[u] < depth[v]) swap(u, v);
    
    long long ans = 0;
    
    // Sobe u até a mesma profundidade de v
    int diff = depth[u] - depth[v];
    for(int i = 0; i < LOG; i++) {
        if(diff & (1 << i)) {
            ans = max(ans, max_edge[i][u]);
            u = up[i][u];
        }
    }
    
    if(u == v) return ans;
    
    // Sobe os dois juntos
    for(int i = LOG-1; i >= 0; i--) {
        if(up[i][u] != up[i][v]) {
            ans = max(ans, max_edge[i][u]);
            ans = max(ans, max_edge[i][v]);
            u = up[i][u];
            v = up[i][v];
        }
    }
    
    ans = max(ans, max_edge[0][u]);
    ans = max(ans, max_edge[0][v]);
    
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<Aresta> arestas(m);
    vector<bool> in_mst(m, false);
    
    for(int i = 0; i < m; i++) {
        cin >> arestas[i].u >> arestas[i].v >> arestas[i].w;
        arestas[i].u--;
        arestas[i].v--;
        arestas[i].id = i;
    }
    
    // Inicializar DSU
    for(int i = 0; i < n; i++) {
        pai[i] = i;
        tam[i] = 1;
    }
    
    // Kruskal - encontrar a MST
    sort(arestas.begin(), arestas.end(), [](Aresta a, Aresta b) {
        return a.w < b.w;
    });
    
    long long soma_mst = 0;
    vector<Aresta> mst_edges;
    vector<Aresta> out_edges;
    
    for(auto& a : arestas) {
        if(find(a.u) != find(a.v)) {
            unite(a.u, a.v);
            soma_mst += a.w;
            in_mst[a.id] = true;
            mst_edges.push_back(a);
        } else {
            out_edges.push_back(a);
        }
    }
    
    // Construir a árvore da MST
    for(auto& a : mst_edges) {
        tree[a.u].push_back({a.v, a.w});
        tree[a.v].push_back({a.u, a.w});
    }
    
    // Pré-processamento LCA
    depth[0] = 0;
    dfs(0, 0, 0);
    
    // Caso 1: teleportador na MST (zerar a maior aresta)
    long long maior_na_mst = 0;
    for(auto& a : mst_edges) {
        maior_na_mst = max(maior_na_mst, a.w);
    }
    long long resposta = soma_mst - maior_na_mst;
    
    // Caso 2: teleportador em aresta fora da MST
    for(auto& a : out_edges) {
        long long max_no_caminho = query_max_edge(a.u, a.v);
        long long candidato = soma_mst - max_no_caminho;
        resposta = min(resposta, candidato);
    }
    
    cout << resposta << endl;
    
    return 0;
}