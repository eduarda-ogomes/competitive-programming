#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int as=0, outras=0;
    for(int i=0; i< s.size();i++){
        if(s[i] == 'a') as++;
        else outras++;
    }
    if(as<=outras) outras = as-1;

    cout << as + outras << '\n';
}