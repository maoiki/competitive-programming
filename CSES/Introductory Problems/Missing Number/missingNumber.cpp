#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll n, x;

  cin >> n;

  ll s1 = n*(n+1)/2;
  ll s2 = 0;

  for (int i = 0; i < n-1; i++){
    cin >> x;
    s2 += x;
  }
  
  cout << s1-s2;
}
