#include <iostream>
using namespace std;

int main(){
    int X,N;
    cin >> X >> N;
    int acumulado = X;

    for(int i = 0; i < N; i++){
        int usado;
        cin >> usado;
        acumulado -= usado;
        acumulado += X;
    }

    cout << acumulado << endl;

    return 0;
}