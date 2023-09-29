#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)

typedef set<int> si;

int main() {
  int n; cin >> n;
  si s;

  FOR(i,0,n){
    ll x; cin >> x;
    s.insert(x);
  }

  cout << s.size();
}
