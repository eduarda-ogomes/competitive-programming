#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int N,M;
    cin >> N;

    vector<int> fila(N);
    for (int i = 0; i < N; i++){
        cin >> fila[i];
    }

    cin >> M;

    unordered_set<int> deixaram;
    for (int i = 0; i < M; i++){
        int id;
        cin >> id;
        deixaram.insert(id);
    }
    
    bool primeiro = true;

    for(int id : fila){
        if (deixaram.find(id) == deixaram.end()) {
            if (!primeiro) cout << " ";
            cout << id;
            primeiro = false;
        }
    }
    
    cout << endl;

    return 0; 
}