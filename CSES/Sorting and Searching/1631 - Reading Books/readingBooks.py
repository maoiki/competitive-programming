n = int(input())
b = [int(i) for i in input().split()]
b.sort(reverse=True)

sumb = sum(b)
dif = sumb - b[0]
 
if b[0] > dif:
    print(b[0] * 2)
else:
    print(sumb)
