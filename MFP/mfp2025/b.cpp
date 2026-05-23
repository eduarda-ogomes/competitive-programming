#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector<bool> visitado;

void dfs(int u){
    visitado[u] = true;
    for(int v : grafo[u]){
        if(!visitado[v]) dfs(v); 
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    grafo.resize(n+1);
    visitado.assign(n+1,false);

    for(int i =0; i<m; i++){
        int a,b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    int componentes = 0;
    for(int i=1; i<=n ; i++){
        if(!visitado[i]){
            componentes++;
            dfs(i);
        }
    }

    if(componentes==1 && m == n-1) cout << "BOM\n";
    else{
        int destruir = m - (n - componentes);
        int construir = componentes - 1;
        cout << "RUIM " << destruir << " " << construir << "\n";
    }

    return 0;
}