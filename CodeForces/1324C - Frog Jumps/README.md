# Solution/explanation

By analyzing the problem, you can see that for the frog to be able to jump to the end, he has to jump more spaces than the longest subsequence of $L$ in the string. Therefore, the solution consists of creating counters to record the size of the largest subsequence of $L$ and print $counter+1$, since it needs to be larger.
