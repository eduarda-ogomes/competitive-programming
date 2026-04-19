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

        //chega
        if(acao== "CHEGA"){
            string nome;
            int fome;

            cin >> nome >> fome;

            Lobo novo;
            novo.nome = nome;
            novo.fome = fome;
            novo.ordem = contador;

            fila.push_back(novo);
            contador++;
        }

        //fome
        else if(acao=="FOME")   {
            string nome;
            int x;
             cin >> nome >> x;

             for(int i=0; i < fila.size(); i++){
                if(fila[i].nome == nome){
                    fila[i].fome +=x;
                    break;
                }
             }
        }
        
        //sai
        else if(acao == "SAI"){
            string nome;
            cin >> nome;

            for(int i=0; i< fila.size(); i++){
                if(fila[i].nome == nome){
                    fila.erase(fila.begin() + i);
                    break;
                }
            }
        }

        //serve
        else if(acao == "SERVE"){
            int melhor = 0;

            for(int i =1; i < fila.size(); i++){
                if(fila[i].fome > fila[melhor].fome){
                    melhor = i;
                }
            else if (fila[i].fome == fila[melhor].fome && fila[i].ordem < fila[melhor].ordem){
                melhor = i;
            }
        }
            cout << fila[melhor].nome << endl;

            fila.erase(fila.begin() + melhor);
        }
    }
}