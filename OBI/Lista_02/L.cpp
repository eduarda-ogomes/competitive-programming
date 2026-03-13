#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int>A(N);
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    int dias=0, viws=0;

    for (int i=0;i<N;i++){
        dias++;
        viws += A[i];
        if(viws>=1000000){
            break;
        }
    }
    cout << dias << endl;
}