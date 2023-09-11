#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

typedef vector<long long> vll;

int main() {
  int n; cin >> n;
  vll v;
  ll s, sol;

  for(int i=0; i < n; i++){
    ll x; cin >> x;
    v.pb(x);

    if (i == 0){
      s = v[i]; 
      sol = v[i];
    } else {
      s = max(v[i], s+v[i]);
      sol = max(sol, s);
    }
  }
  cout << sol << endl;
}

