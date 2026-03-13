#include <iostream>
using namespace std;

int main(){
    int L,R,D;
    cin >> L >> R >> D;

    if (R>50 && L<R && R>D){
        cout << "S" << endl;
    } else{
        cout << "N" << endl;
    }

    return 0;
}