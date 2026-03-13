#include <iostream>
using namespace std;

int main(){
    int A, N,divisao = 0,cap = 0, mari = 0;
    cin >> A >> N;

    int mariRecebe = A / (N+2);
    int capRecebe = mariRecebe * 2; 

    cout << capRecebe << endl;
    return 0;    
}