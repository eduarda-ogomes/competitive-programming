#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T1,T2,T3;
    cin >> T1 >> T2 >> T3;

    vector<pair<int, int>> tempos = {{T1, 1}, {T2, 2}, {T3, 3}};

    sort(tempos.begin(), tempos.end());

    cout << tempos[0].second << endl;
    cout << tempos[1].second << endl; 
    cout << tempos[2].second << endl;

    return 0;

}