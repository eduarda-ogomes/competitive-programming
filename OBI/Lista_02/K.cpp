#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> I(N);
    for (int c = 0; c < N; c++) {
        cin >> I[c];
    }

    int A = 0, B = 0;
    
    for (int c=0;c<N;c++){
        if (I[c]==1){
            A = 1 - A;
        } else if (I[c]==2){
            A = 1 - A;
            B = 1- B;
        }
    }
    cout << A << endl << B;

    return 0;
}