# Solution/explanation
Here we use the two pointer technique, after sorting the *desired sizes* and *available apartments* arrays. If the difference between the *desired size* and the *available apartment* size is within the margin, we increase the counter and move the two pointers. If the *desired size* is much larger than the *available apartment*, we move the pointer associated with the *available apartment*, if it's the other way around we move the pointer of the *desired sizes*.
## Notes:

### 🔵 C++
When initializing a vector, you can already define its size in advance, which changes the way you add values to it. Here are the examples:
```cpp
// without defining size in advance
int n; cin >> n;
vector<int> a;

for(int i = 0; i < n; i++){
    int x; cin >> x;
    a.pb(x);
  }

// defining size in advance
int n; cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
```
