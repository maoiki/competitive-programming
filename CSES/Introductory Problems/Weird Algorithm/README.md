# Solution/explanation

Read an number input then check if he is even or odd to do the math. Keep doing it until your number is 1.

## Notes:
### 🐍 Python
<details>
<summary>using the operator `/` in Python turns an int into a float</summary>


example 01:
``` python
print(5/2) #output: 2.5
print(4/2) #output: 2.0
```
so if you want to get a int and just don't care about the fraction part, use `//` (the floor division operator) or `int(x)`.


example 02:
``` python
print(5//2) #output: 2
print(4//2) #output: 2
```
</details>
<br>
<details>
<summary> inputs are read as strings by default</summary>

to fix it and transform it into the data type we want, we can wrap it in an `int()` or something similar.

example:

```python
x = input()
y = int(input())

# if you print the type of this variables, will get:
  print(type(x)) #output: <class 'str'>
  print(type(y)) #output: <class 'int'>
```
</details>

### 🔵 C++

the input you receive can be stored as an int, because: $1≤n≤10^6$
but if you analyze the algorithm, you can see that this number can be multiplied indefinitely, exceeding the storage limit of an int ($2*10^9$), so it's necessary to use a `long long` instead.