i1 = input()
i2 = [int(i) for i in input().split()]
 
s = 0
sol = i2[0]
 
for i in i2:
    s = max(i, s+i)
    sol = max(sol, s)
 
print(sol)