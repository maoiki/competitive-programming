# Solution/explanation
To solve this problem, I used two arrays: one for `arrival times` and another for `departure times`. You need to sort these arrays and then use the two pointers technique. When the `arrival time` is less than the `departure time`, we move the pointer associated with the `arrival time` and increase the counter, and if it's the other way around, we move the pointer associated with the `departure time` and decrease the counter. The answer is obtained by checking the highest value the counter has reached.

