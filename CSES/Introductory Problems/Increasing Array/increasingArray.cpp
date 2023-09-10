#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

typedef vector<long long> vll;

int main() {
  ll sol = 0;
  vll v;
  int n; cin >> n;

  for(int i=0; i < n; i++){
    ll x; cin >> x;
    
    v.pb(x);

    if(i>0){
      if(v[i-1] > v[i]){
        sol += v[i-1] - v[i];
        v[i] = v[i-1];
      }
    }
  }

  cout << sol;
}
