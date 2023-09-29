#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define pb push_back
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define sortv(v) sort((v).begin(), (v).end())

int main() {
  vi a, b;
  int n, m, k, c=0, i=0, j=0;
  cin >> n >> m >> k;

  FOR(i,0,n){
    int x; cin >> x;
    a.pb(x);
  }

  FOR(i,0,m){
    int x; cin >> x;
    b.pb(x);
  }

  sortv(a);
  sortv(b);

  while (i < n && j < m){
    int dif = a[i] - b[j];

    if (-k <= dif && dif <= k){
      c++;
      i++;
      j++;
    }
    else if(dif > k){
      j++;
    }
    else if(dif < k){
      i++;
    }
  }
  cout << c;
}