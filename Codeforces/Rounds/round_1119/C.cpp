#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        int primeiro = -1, ultimo = -1;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1){
                if(primeiro == -1) primeiro = i;
                ultimo = i;
            }
        }

        if(primeiro == -1){
            for(int i = 0; i < n; i++){
                if(a[i] == -1){
                    a[i] = 1;
                    primeiro = i;
                    break;
                }
            }

            for(int i = n - 1; i >= 0; i--){
                if(a[i] == -1){
                    a[i] = 1;
                    ultimo = i;
                    break;
                }
            }   
        }

        for(int i = 0; i < n; i++){
            if(i >= primeiro && i <= ultimo && a[i] == -1) {
                a[i] = 0;
            }
            if(a[i] == -1) {
                a[i] = 0;
            }
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        
        cout << "\n";
    }
    return 0;
}