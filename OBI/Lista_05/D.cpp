#include <iostream>
using namespace std;

int main(){
    int N,G,M;
    cin >> N >> G >> M;

    int pedaços = G*8 + M*6;
    int sobra = max(0,pedaços - N);
    cout << sobra << endl;
    return 0; 
}