#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)
#define ll long long
#define pb push_back
#define mp make_pair
typedef vector<pair<int, int>> vpi;
#define sortv(v) sort((v).begin(), (v).end())

int main() {
  int n; cin >> n;
  ll sol = 0, end = 0;
  vpi tasks;

  FOR(i,0,n){
    int a, d; cin >> a >> d;
    tasks.pb(mp(a,d));
  }

  sortv(tasks);

  for (auto t : tasks){
    end += t.first;
    sol += t.second - end;
  }

  cout << sol << endl;
}