#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; 
  cin >> s;

  int c = 1, sol = 1;

  for (int i = 1; i< s.length(); i++){
    if (s[i] == s[i-1]){
      c++;
    }
    else {
      c = 1;
    }

    sol = max(c, sol);
  }
  
  cout << sol;
}