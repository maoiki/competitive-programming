# Solution/explanation

To help solve this problem, read section 6.3 of the book [Competitive Programmer's Handbook](https://cses.fi/book/index.php)

In this challenge, we sort the tasks by their durations and keep two variables: one for the total time used and the other for the "score" of the solution, which must be as high as possible.

The algorithm consists of at each iteration, adding the duration of the current task to the total time variable and adding $deadline -  totalTime$ to the solution variable.

## Notes

### 🐍 Python

I ran a few tests and got very different times for basically the same code:

```python
# appending tuples: got 0.76s using CPython and 0.89s using PyPy3
tarefas.append((int(a), int(d)))

# appending arrays: got 0.97s using CPython, but got time limit exceeded using PyPy3
tarefas.append([int(a), int(d)])
```

With this in mind, be careful when choosing the compiler and also pay attention to what type of object you are creating, to make it as efficient as possible.
