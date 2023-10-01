#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)

int main() {
  int n, m; cin >> n >> m;
  multiset<int> r;

  FOR(i,0,n){
    int x; cin >> x;
    r.insert(x);
  }
  
  FOR(i,0,m){
    int x; cin >> x;

    auto it = r.upper_bound(x);

    if (it == r.begin()) {
      cout << -1 << endl;
        
    } else {
        --it;
        cout << *it << endl;
        r.erase(it);
    }
  }
 
}
