i1 = int(input())
i2 = [int(i) for i in input().split()]
i2.sort()
c = 1

for i in range(1,i1):
    if i2[i] != i2[i-1]:
        c += 1

print(c)