#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

    int max = 1e9;
  for(int i=1; i<max; i++){
      int sla = __gcd(i,n);
      if(sla == n){
        cout << i << "\n";
        break;
      };
  }



    
    return 0;
}