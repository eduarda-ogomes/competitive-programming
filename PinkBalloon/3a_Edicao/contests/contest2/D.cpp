#include <bits/stdc++.h>
using namespace std;

int main(){
    int d;
    cin >> d;

    int p = 0;
    if(d<=800) p++;
    else if(d>800 and d<=1400) p+=2;
    else if(d>1400 and d<=2000) p+=3;

    cout << p << "\n";
    return 0;
}