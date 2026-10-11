#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;

    vector<string>p(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    for(int i=0; i<n; i++){
        string s = p[i];
        int len = s.size();

        if(len<=10){
            cout << s << endl;
        } 
        else{
            cout << s[0] << len-2 << s[len-1] << endl;
        }
    }  
}
