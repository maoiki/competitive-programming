# Solution/explanation

In this problem, by sorting the $movies$ array by the time each movie ends, we can compare whether the start of the next movie is the same as or after the end of the current movie. When this is true, we can add +1 to the solution counter and update the variable where we store the end value of the current movie with the end of the next movie.

## Notes:

### 🐍 Python

I used the following code to sort the 'movies' array based on the second element of each subarray.

```python
movies.sort(key=lambda x: x[1])
```

### 🔵 C++

When creating the pairs for $a$ and $b$, inside the $movies$ vector, so that I wouldn't need to create a function to sort by the size of the second element, I just inverted the order of $a$ and $b$.
