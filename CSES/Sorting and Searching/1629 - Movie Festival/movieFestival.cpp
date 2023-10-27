#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sortv(v) sort((v).begin(), (v).end())

int main() {
vector<pair<int, int>> movies;
int n, sol = 0, end = 0;
cin >> n;

FOR(i,0,n){
  int a,b; cin >> a >> b;
  movies.pb(mp(b,a));
}

sortv(movies);

for (auto movie : movies){
  if( movie.S >= end) {
    end =  movie.F;
    sol++;
  }
}

cout << sol << endl;
}
