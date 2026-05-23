#include <bits/stdc++.h>
using namespace std;

int n, m;
int g[105][105];
int color[105][105]; // 0 ou 1
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void bfs(int si, int sj, int c) {
    queue<pair<int,int>> q;
    q.push({si, sj});
    color[si][sj] = c;
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (color[nx][ny] != -1) continue;
            // se valor igual, troca cor (precisam de add diferente)
            // se valor diferente, mantém cor (qualquer add serve, mas propaga)
            if (g[nx][ny] == g[x][y])
                color[nx][ny] = 1 - color[x][y];
            else
                color[nx][ny] = color[x][y];
            q.push({nx, ny});
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> g[i][j];

    memset(color, -1, sizeof(color));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (color[i][j] == -1)
                bfs(i, j, 0);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cout << g[i][j] + color[i][j] << " \n"[j==m-1];
}