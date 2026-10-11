#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<char> number;
    for(char c:s){
        if(c != '+') number.push_back(c);
    }

    sort(number.begin(), number.end());

    for(int i =0; i< number.size(); i++){
        if(i) cout << '+';
        cout << number[i];
    }
}
