#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int minu = 0, mais=0;
    for(char c:s){
        if(islower(c)) minu++;
        else mais++;
    }

    if(mais>minu){
        for(char &c:s) c = toupper(c);
    }
    else{
        for(char &c:s) c = tolower(c);
    }

    cout << s <<  "\n";
    return 0;
}