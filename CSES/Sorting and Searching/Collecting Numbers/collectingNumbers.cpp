#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i <= b; i++)

int main() {
  int n, sol = 1; 
  cin >> n;
  vector<int> m(n+1); 

  FOR(i,1,n){
      int x; cin >> x;
      m[x] = i;
  }

  FOR(i,2,n){
    if( m[i] < m[i-1]){
        sol++;
      }
  }

  cout << sol << endl;
}   