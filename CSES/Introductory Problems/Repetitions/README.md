# Solution/explanation
To find the longest repetition in the sequence, we go through the entire string and compare whether the current char is the same as the previous one; if so, we add +1 to the counter, if not, we reset the counter. To do this, it's a good idea to start the `for` loops at 1.

## Notes:

### 🐍 Python
In python, for this specific case I realized that using `max()` was slower than using an `if` to update the solution counter value.
