#include <iostream>
using namespace std;

int main() {
    int H, P, F, D;
    cin >> H >> P >> F >> D;

    bool consegueFugir = true;

    if (D == -1) { // Sentido horário
        while (F != H) {
            if (F == P) {
                consegueFugir = false;
                break;
            }
            F = (F - 1 + 16) % 16;
        }
    } else { // Sentido anti-horário
        while (F != H) {
            if (F == P) {
                consegueFugir = false;
                break;
            }
            F = (F + 1) % 16;
        }
    }

    cout << (consegueFugir ? "S" : "N") << endl;

    return 0;
}