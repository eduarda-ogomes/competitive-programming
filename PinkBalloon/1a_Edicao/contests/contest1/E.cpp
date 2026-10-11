#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int lucas=0, isa=0, amigo=0, outro=0,maior=0;

    string vencedor;

    while(n--){
        char x;
        cin >> x;

        if(x == 'I') isa++;
        else if(x == 'l') lucas++;
        else if(x == '1') amigo++;
        else outro++;

        if(lucas>maior){
            maior = lucas;
            vencedor = "Lucas";
        }
        if(isa>maior){
            maior = isa;
            vencedor = "Isa";
        }
        if(amigo>maior){
            maior = amigo;
            vencedor = "Amigo 1";
        }
        if(outro>maior){
            maior = outro;
            vencedor = "Outro amigo";
        }
    }

    cout << vencedor << '\n';


}