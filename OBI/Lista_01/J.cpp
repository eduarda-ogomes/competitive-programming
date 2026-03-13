#include <iostream>
using namespace std;

int main(){
    int M,A,B,C;
    cin >> M >> A >> B;

    C = M-A-B;
    if (A>B && A>C){
        cout << A << endl;
    } else if (B>A && B>C){
        cout << B << endl;
    } else {
        cout << C << endl;
    }

    return 0;
}