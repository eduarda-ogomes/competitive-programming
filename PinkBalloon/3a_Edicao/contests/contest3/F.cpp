#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sobra = (n-3)%8;
    if(sobra==5) cout << "3\n";
    else if(sobra==4) cout << 2 << "\n";
    else if(sobra==3) cout << 1 << "\n";
    return 0;
}