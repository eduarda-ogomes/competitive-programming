#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
  cin >>n;

  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  bool pertence = false;
  int x;
  cin >> x;
  for(int i=0; i<n; i++){
    if(a[i] == x){
        pertence = true;
        break;
    }
  }
  
    if(pertence) cout << "pertence\n";
    else cout << "nao pertence\n";

    return 0;
}