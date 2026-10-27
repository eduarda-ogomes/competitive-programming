#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin >>c;
    cin.ignore();

    vector<string> livros;
    for(int i=0; i<c; i++){
        string x;
        getline(cin,x);

        if(x[0] == '+'){
            x.erase(0,2);
            livros.push_back(x);
        } else if(x[0] == '?'){
            if(!livros.empty()){
                cout << livros.back() << "\n";
                livros.pop_back();

            } else cout << "Backlog vazio\n";
        }
    }

    
    return 0;
}