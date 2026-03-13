#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,P;
    cin >> N;

    vector<int> estoque(N);
    for (int i = 0; i < N; i++)
    {
        cin >> estoque[i];
    }

    cin >> P;
    int vendas = 0;

    for (int i = 0; i < P; i++){
        int pedido;
        cin >> pedido;

        if (estoque[pedido-1]>0){
            vendas++;
            estoque[pedido-1]--;
        }
    }

    cout << vendas << endl;
    return 0;    
}