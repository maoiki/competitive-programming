# Solution/explanation
This problem can be found in more detail at section 2.4 in the book [Competitive Programmer's Handbook](https://cses.fi/book/index.php)

I used the complexity $O(n)$ solution, which basically consists of checking if *the current sum + next item* is greater than the current sum and update the value of the current sum, then compare if the current sum is greater than the sum previously recorded as the solution and update the solution.
## Notes:
It is necessary to define in advance the value of the variables that store the current sum and the solution, before applying the algorithm. You can assign them the first value of the array, like i did.

