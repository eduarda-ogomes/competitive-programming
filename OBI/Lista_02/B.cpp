#include <iostream>
using namespace std;

int main(){
    int P,D1,D2,S;
    cin >> P >> D1 >> D2;

    S = D1 + D2;
    if ((P==0 && S%2==0) ||(P==1 && S%2!=0)){
        cout << 0 << endl;
    } else if ((P==1 && S%2==0)||(P==0 && S%2!=0)){
        cout << 1 << endl;
    }

    return 0;
}