#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; i++)
#define ll long long
typedef vector<int> vi;
#define sortv(v) sort((v).begin(), (v).end())

// Tried to make it as readable as possible, which result in longer code.

int main() {
  int n; cin >> n;
  ll sum = 0;
  vi books(n);

  FOR(i,0,n){
    cin >> books[i];
    sum += books[i];
  }

  sortv(books);

  int bigger = books[n-1];
  ll dif = sum - bigger;
  
  if (dif < bigger){
    cout << 2 * bigger << endl;
  } else {
    cout << sum << endl;
  }
}
