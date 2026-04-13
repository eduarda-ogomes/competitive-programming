#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string flyhome;
    cin >> flyhome;

    int quant_origem=0, quant_destino=0;

    while(n--){
        string linha;
        cin >> linha;

        int pos = linha.find("->");

        string origem = linha.substr(0,pos);
        string destino = linha.substr(pos +2);
                
        if(origem == flyhome) quant_origem++;
        if(destino == flyhome) quant_destino++;
    }

    if(quant_destino == quant_origem) cout << "home" << endl;
    else cout << "contest" << endl;
    return 0;
}