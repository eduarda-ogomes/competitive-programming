#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int time1=0, time2=0;

    while(n--){
        string s;
        int t,p;
        cin >> s >> t >> p;

        if(t==1)time1+=p;
        else time2+=p;
    }
    cout << time1 << " x " << time2 << endl;
    return 0;
}