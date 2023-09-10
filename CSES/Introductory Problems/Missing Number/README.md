# Solution/explanation
Here we have a list of numbers and we need to find which one is missing. There are two possible approaches to this problem: 
1) sort the list and check if the next number is equal to $n+1$
2) perform two sums, the first with the total value and the second with the received value. The result would consist of subtracting one sum from the other.

I've coded the two different approaches in python to better exemplify them.

## Notes:
### 🐍 Python

```python
# this line:
x = [int(i) for i in input().split()]

# is equivalent to:
y = map(int, input().split())

# or:
z = input() #get input (as a string)
z = z.split() # split the string 

z_ints = [] # create an empty list to hold the ints

for i in z:
  z_int = int(i) # turn the char/string into an int
  z_ints.append(z_int) # add the integer into the list

```

### 🔵 C++
Used the summation formula below to calculate the total value that the numbers should have:
$$\frac{n*(n+1)}{2} $$
