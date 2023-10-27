# Solution/explanation

In this challenge, the trick is to realize that if the biggest book is bigger than the sum of all the other books, the time will be $biggest*2$, if not, it will simply be the sum of all the books.

Tip: if you sort the array of books, it's easy to find out which is the biggest.

I've coded it in two ways: using the `max()` function and using variables to compare the sizes. If you decide to implement the solution using `max()` in C++, don't forget that the function can't compare `int` with `long long`, so the types need to be the same to work.
