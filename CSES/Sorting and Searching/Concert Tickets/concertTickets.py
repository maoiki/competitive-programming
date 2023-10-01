# !!! THIS CODE IS FOR FUTURE REFERENCE ONLY. HE RETURNS "time limit exceeded" IN CSES. 
# More details in README.md

import bisect
 
n, m = [int(i) for i in input().split()]
r = [int(i) for i in input().split()]
r.sort()
 
e = [int(i) for i in input().split()]
 
for i in e:
    if not r or i < r[0]:
        print(-1)
    else:
        b = bisect.bisect_right(r,i)
        if b:
            print(r[b-1])
            del r[b-1]