#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
  cin >>n;

  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  
  vector<int> b(n);
  for(int i=0; i<n; i++){
    cin >> b[i];
  }

  bool igual = true;

  for(int i=0; i<n; i++){
    if(a[i] != b[i]){
      igual = false;
      break;
    }
  }
  
      if(igual) cout << "sim\n";
    else cout << "nao\n";

    return 0;
}