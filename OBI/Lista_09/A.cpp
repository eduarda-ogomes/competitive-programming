#include <iostream>
#include <vector>
using namespace std;

void passa_bolinha(int i, int j, int N, vector<vector<int>>& camisetas, vector<vector<bool>>& bandeiras, int& count){
    //se ja visitou retorna
    if (bandeiras[i][j]) return;
    // marca aluno atual
    bandeiras[i][j] = true;
    count++;

    //direções
    int di[] = {-1,0,1,0};
    int dj[] = {0,1,0,-1};

    for (int d=0; d<4; d++){
        int ni = i + di[d];
        int nj = j + dj[d];

        // verifica se vizinho ta na grade
        if (ni>=0 && ni<N && nj>=0 && nj<N){
            //verifica se pode passar bolinha
            if (camisetas[ni][nj] >= camisetas[i][j] && !bandeiras[ni][nj]){
                passa_bolinha(ni, nj, N, camisetas, bandeiras, count);
            }
        }
    }
}

int main(){
    int N;
    cin >> N;

    int I, J;
    cin >> I >> J;
    // ajustar indices 0-based
    I--; J--;

    vector<vector<int>> camisetas(N, vector<int>(N));
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cin >> camisetas[i][j];
        }
    }

    vector<vector<bool>> bandeiras(N, vector<bool>(N, false));
    int count = 0;

    passa_bolinha(I, J, N, camisetas, bandeiras, count);

    cout << count << endl;
    return 0;
}