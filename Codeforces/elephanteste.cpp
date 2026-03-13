#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int passos = n/5;
    if(n%5 !=0){
        passos +=1;
    }
    
    cout << passos << endl;
    return 0;
}
