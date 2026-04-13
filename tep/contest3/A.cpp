#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a = 1;
    for(int i= sqrt(n); i>=1; i--){
        if(n % i ==0){
            a = i;
            break;
        }
    }

    int b = n/a;
    cout << a << " " << b << endl;
    return 0;
}