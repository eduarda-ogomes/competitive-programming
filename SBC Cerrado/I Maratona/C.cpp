#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while(getline(cin, s)) {

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == 'C' &&
               i > 0 &&
               isalpha(s[i-1]) &&
               (i == s.size()-1 || !isalpha(s[i+1]))) {

                cout << "-se";
            }
            else {
                cout << s[i];
            }
        }

        cout << '\n';
    }

    return 0;
}