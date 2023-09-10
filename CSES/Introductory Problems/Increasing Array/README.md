# Solution/explanation
To solve this challenge, it is important to keep in mind that each element is at least as large as the previous element:

$$arr[i-1]  \leq arr[i] \tag{1}$$ 
The solution is to add up the differences between numbers that don't meet condition $(1)$ in a counter and then update the value of the item so that it does. The simplest way is to make it the same as its predecessor.

## Notes:

### 🔵 C++
Some strategies were used to reduce the code, which are widely used in competitive programming, such as:

```cpp
typedef long long ll;
typedef vector<int> vi;

#define PB push_back
```

To learn more about it, I recommend the following book: [Competitive Programmer's Handbook](https://cses.fi/book/index.php)
