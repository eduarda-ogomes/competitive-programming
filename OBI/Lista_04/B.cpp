#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int N,M,faltam = 0;
    cin >> N >> M;
    
    unordered_set<int> compradas;
    for (int i = 0; i < M; i++){
        int id;
        cin >> id;
        compradas.insert(id);
    }

    for (int i = 1; i<=N; i++){
        if (compradas.find(i) == compradas.end()){
            faltam++;
        }
    }

    cout << faltam << endl;

    return 0; 
}