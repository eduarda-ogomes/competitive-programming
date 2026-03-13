#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    char moeda; 
    cin >> n >> moeda;

    vector<int> movimentos(n);
    for (int i = 0; i < n; i++) {
        cin >> movimentos[i];
    }


    for (int movimento : movimentos) {
        if (movimento == 1) { 
            if (moeda == 'A') moeda = 'B';
            else if (moeda == 'B') moeda = 'A';
        } else if (movimento == 2) { 
            if (moeda == 'B') moeda = 'C';
            else if (moeda == 'C') moeda = 'B';
        } else if (movimento == 3) { 
            if (moeda == 'A') moeda = 'C';
            else if (moeda == 'C') moeda = 'A';
        }
    }

    cout << moeda << endl;

    return 0;
}
