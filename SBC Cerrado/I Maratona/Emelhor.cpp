#include <bits/stdc++.h>
using namespace std;

struct Lobo{
    string nome;
    int fome;
    int ordem;
};

int main(){
    int n;
    cin >> n;

    vector<Lobo> fila;
    int contador = 0;

    while(n--){
        string acao;
        cin >> acao;

        if(acao == "CHEGA"){
            string nome;
            int fome;
            cin >> nome >> fome;

            fila.push_back({nome, fome, contador++});
        }

        else if(acao == "FOME"){
            string nome;
            int x;
            cin >> nome >> x;

            auto it = find_if(fila.begin(), fila.end(),
                [&](Lobo l){ return l.nome == nome; });

            it->fome += x;
        }

        else if(acao == "SAI"){
            string nome;
            cin >> nome;

            auto it = find_if(fila.begin(), fila.end(),
                [&](Lobo l){ return l.nome == nome; });

            fila.erase(it);
        }

        else if(acao == "SERVE"){

            auto it = max_element(fila.begin(), fila.end(),
                [](Lobo a, Lobo b){

                    if(a.fome != b.fome)
                        return a.fome < b.fome;

                    return a.ordem > b.ordem;
                });

            cout << it->nome << endl;
            fila.erase(it);
        }
    }
}