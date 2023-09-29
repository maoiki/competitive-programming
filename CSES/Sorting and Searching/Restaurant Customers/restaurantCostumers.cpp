#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
#define sortv(v) sort((v).begin(), (v).end())

int main() {
  int n; cin >> n;
  vi e(n), s(n);

  FOR(i,0,n){
    cin >> e[i] >> s[i];
  }

  sortv(e);
  sortv(s);

  int c = 0, i = 0, j = 0, sol = 0;

  while(i < n && j < n){
    if (e[i] < s[j]){
      c++;
      i++;
    }
    else{
      c--;
      j++;
    }

    sol = max(sol, c);
  }
  
  cout << sol;
}
