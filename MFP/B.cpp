#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    int minX = 1e9, maxX=-1e9;

    for(int i=0; i<4; i++){
        cin >> x >> y;
        minX = min(minX,x);
        maxX = max(maxX,x);
    }

    int lado = maxX - minX;
    int area = lado * lado;

    cout << area << endl;
    return 0;
}