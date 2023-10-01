#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)

int main() {
  int n, a = 0, b = 0;
  cin >> n;

    FOR(i, 0, n){
      char x; cin >> x;
      if (x == '('){
        a++;
      }
      else{
        a--;
      }
      b = min(b, a);
    }

  if(a == 0 && b >= -1){
    cout << "Yes";
  } else {
    cout << "No";
  }
}