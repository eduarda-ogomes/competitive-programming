#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string s,p;
    getline(cin,s);
    getline(cin,p);

    string dic = "";
    for(int i=0; i<s.size(); i++){
        if (isalpha(s[i])){
            dic += s[i];
        }
    }

    string prompt = "";
    for(int i=0; i<p.size(); i++){
        if (isalpha(p[i])){
            prompt += p[i];
        }
    }

    sort(dic.begin(), dic.end());
    sort(prompt.begin(), prompt.end());

    if(dic == prompt) cout <<  "S\n";
    else cout << "N\n";
    return 0;
}