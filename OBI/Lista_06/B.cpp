#include <iostream>
using namespace std;


int main() {
    int A, S, D;
    cin >> A >> S >> D;

    int P = S - D;

    int dias = (A - S + P - 1) / P + 1;

    cout << dias << endl;

    return 0;
}
