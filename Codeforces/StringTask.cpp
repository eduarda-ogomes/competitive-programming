#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string vogal = "aoyeuiAOYEUI";

    for(char c : s){
        c = tolower(c);

        if(vogal.find(c) == string::npos){
            cout << "." << c;
        }
    }
    
    return 0;
}