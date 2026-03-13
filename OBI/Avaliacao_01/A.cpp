#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,S;
    cin >> N >> S;
    vector<int> movi(N);
    for (int i = 0; i < N; i++){
        cin >> movi[i];
    }

    int menor = S;
    for (int i = 0; i < N; i++){
        S += movi[i];
        if (S<menor){
            menor = S;
        }
    }
    
    cout << menor << endl;
    return 0;    
}