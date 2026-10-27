#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    set<string> banco;
    while(n--){
        string s;
        getline(cin,s);
        banco.insert(s);
    }

    cout << banco.size() << "\n";

    return 0;
}