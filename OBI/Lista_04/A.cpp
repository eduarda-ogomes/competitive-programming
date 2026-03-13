#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<vector<int>> matriz(N, vector<int>(N));

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> matriz[i][j];
        } 
    }

    int linhaIlegivel, colunaIlegivel;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (matriz[i][j] == 0){
                linhaIlegivel = i;
                colunaIlegivel = j;
                break;
            }
        } 
    }

    int soma = 0;
    for (int i = 0; i < N; i++){
        if(i != linhaIlegivel){
            for (int j = 0; j < N; j++){
                soma += matriz[i][j];
            } 
            break;
        }
    }

    int somaLinha = 0;
    for (int j = 0; j < N; j++) {
        somaLinha += matriz[linhaIlegivel][j];
    }

    

    int valorIlegivel = soma - somaLinha;

    cout << valorIlegivel << endl;
    cout << linhaIlegivel + 1 << endl; 
    cout << colunaIlegivel + 1 << endl;
    

    return 0;
}