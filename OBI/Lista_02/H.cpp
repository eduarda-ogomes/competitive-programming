#include <iostream>
using namespace std;

int main(){
    int N,R,P;
    cin >> N >> R >> P;

    int dias = 0;
    int total = N;
    int novos = N;

    while(total < P){
        novos *= R;
        dias += 1;
        total += novos;
    }

    cout << dias;

    return 0;
}