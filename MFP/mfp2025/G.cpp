#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string p1, p2;

    for(int i=0; i< s.size(); i++){
        if(i%2==0) p1 += s[i];
        else p2 += s[i];
    }

    cout << p1 << "\n" << p2 << "\n";
    return 0;
}