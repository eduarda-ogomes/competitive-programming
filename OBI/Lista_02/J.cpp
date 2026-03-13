#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,P,M;
    cin >> N;

    vector<int> T(N);
    int pequeno = 0, medio = 0;

    for (int i=0;i<N;i++){
        cin >> T[i];
        if (T[i] == 1){
            pequeno++;
        } else if (T[i] == 2) {
            medio++;
        }
    }
    cin >> P >> M;

    if (medio <= M && pequeno <= P){
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

    return 0;
}