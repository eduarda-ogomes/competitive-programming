#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;

    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    sort(A.begin(),A.end(), greater<int>());

    int C=0;

    for (int i = 0; i < K; i++)
    {
        C=A[i];
    }
    
    cout << C << endl;
    return 0;
}