#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> vantajosos; 

    for (int i = 0; i < N; i++) {
        string estado;
        double precoAlcool, precoGasolina;
        cin >> estado >> precoAlcool >> precoGasolina;

        if (precoAlcool <= 0.7 * precoGasolina) {
            vantajosos.push_back(estado);
        }
    }

    if (vantajosos.empty()) {
        cout << "*" << endl;
    } else {
        for (const string& estado : vantajosos) {
            cout << estado << endl;
        }
    }

    return 0;
}
