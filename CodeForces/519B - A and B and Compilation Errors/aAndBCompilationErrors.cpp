#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)
#define ll long long 

int main() {
  int n; cin >> n;
  ll a = 0, b = 0, c = 0; 
  
  FOR(i,0,n){
    int x; cin >> x;
    a += x;
  }

  FOR(i,0,n-1){
    int x; cin >> x;
    b += x;
  }

  cout << a-b << endl;

  FOR(i,0,n-2){
    int x; cin >> x;
    c += x;
  }

  cout << b-c << endl;

}