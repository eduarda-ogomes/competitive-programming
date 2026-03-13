#include <iostream>
using namespace std;

int main(){
    int R,M,L;
    cin >> R >> M >> L;

    if (R<M){
        cout << "RM" << endl;
    } else {
        cout << "*" << endl;
    } 
    
    if (R<L){
        cout << "RO" << endl;
    } else {
        cout << "*" << endl;
    }

    return 0;
}