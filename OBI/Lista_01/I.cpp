#include <iostream>
using namespace std;

int main(){
    int R,F,C;
    cin >> R >> F >>C;
    
    if ((F > R*3) || (C < 95)){
        cout << "diminuir" << endl;
    } else if((F < R*2) && (C>97)){
        cout << "aumentar" << endl;
    } else{
        cout << "manter" <<endl;
    }

    return 0;
}