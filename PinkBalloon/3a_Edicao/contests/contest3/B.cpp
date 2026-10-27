#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  string rev =s;
  reverse(rev.begin(), rev.end());

  if(s==rev) cout << 1 << "\n";
  else cout << 0 << "\n";
    
    return 0;
}