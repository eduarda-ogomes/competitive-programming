#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,circulados = 0;
    cin >> N;

    vector<int> seq(N);
    for (int i = 0; i < N; i++){
        cin >> seq[i];
    }

    for (int i = 0; i < N; i++){
        if(seq[i] != seq[i+1]){
            circulados++;
        }
    }
    
    cout << circulados;

    return 0;    
}