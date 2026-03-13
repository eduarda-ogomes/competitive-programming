#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int D;
    cin >> D;

    int pontoMaisProximo = (D + 200) / 400 * 400; 

    int distancia = abs(D - pontoMaisProximo);

    cout << distancia << endl;

    return 0;
}
