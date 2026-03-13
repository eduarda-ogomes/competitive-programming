#include <iostream>
using namespace std;

int main(){
    int N,P;
    cin >> N >> P;
    int qBacterias = 1;
    int dias = 0;
    while (qBacterias * P <=N){
        qBacterias *= P;
        dias +=1;
    }
    cout << dias << endl;
    return 0;
}