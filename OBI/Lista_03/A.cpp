#include <iostream>
#include <vector>
using namespace std;

int main(){
    int vitorias=0;

    vector<string> L(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> L[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        if (L[i]=="V") {
            vitorias++;
        }
    }
    
    if(vitorias>=5){
        cout << 1 << endl;
    } else if(vitorias>=3){
        cout << 2 << endl;
    } else if(vitorias>=1){
        cout << 3 << endl;
    } else{
        cout << -1 << endl;
    }

    return 0;
}