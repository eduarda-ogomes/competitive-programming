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

  for(int i=0; i<n; i++){
    cout << a[i] + b[i] <<  " ";
  }
  
    return 0;
}