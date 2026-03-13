#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    int cor=0;
    
    vector<int> fita(N);
    for (int i=0; i<N; i++){
        cin >> fita[i];
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < N; j++){
            if(fita[j] == cor && fita[j] != 9){
                if (fita[j-1] == -1){
                    fita[j-1] = cor+1;
                }
                if (fita[j+1] == -1){
                    fita[j+1] = cor+1;
                }
            }
        }

        if (cor < 10){
            cor++;
        }
    }

    for (int i = 0; i < N; i++){
        if (fita[i] == -1){
            fita[i] = 9;
        }
    }

    bool primeiro = true;

    for (int i = 0; i < N; i++){
        if (primeiro==true){
            cout << fita[i];
            primeiro = false;
        } else {
            cout << " " << fita[i];
        }    
    }
    cout << endl;
    return 0;
}