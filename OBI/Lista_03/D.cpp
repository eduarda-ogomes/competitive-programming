#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    
    int soma = A[0] + A[N-1];
    bool escher = true;

    for (int i = 0; i < N/2;i++){
        if (A[i] + A[N-i-1] != soma){
            escher = false;
            break;
        }
    }

    if (escher && (N%2 != 0)){
        int meio = N/2;
        if (2*A[meio]!= soma){
            escher = false;
        }
    }

    if(escher){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
    
}