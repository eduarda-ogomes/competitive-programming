#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int g1 = 0, g2=0, g3=0;

        while(n--){
            int a;
            cin >> a;

            if(a%2 !=0) g1++;
            else if(a%4 == 0) g2++;
            else g3++;
        }
        int resposta = max(max(g1,g2),g3);
        cout << resposta << "\n";
    }

    return 0;
}
