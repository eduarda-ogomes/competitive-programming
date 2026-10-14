#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int maior = 0;
    int dentro = 0;

    while(n--){
        int a,b;
        cin >> a >> b;

        dentro = dentro - a + b;
        

        if(dentro > maior) maior = dentro;
    }

    cout << maior << "\n";
}