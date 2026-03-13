#include <iostream>
using namespace std;

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    if ((A==2*C+D)&& (D==B+C)){
        cout << "S";
    } else {
        cout << "N";
    }
}