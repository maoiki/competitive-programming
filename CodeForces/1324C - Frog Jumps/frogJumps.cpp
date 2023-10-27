#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)

int main() {
  int n; cin >> n;

  FOR(i,0,n){
    int c = 0, c2 = 0;
    string s; cin >> s;

    for(auto j : s){
      if (j == 'L'){
        c2++;
      } else {
        c2 = 0;
      }

      c = max(c,c2);
    }

    cout << c+1 << endl;
  }
}
