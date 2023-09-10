i1 = int(input())
i2 = [int(i) for i in input().split()]

sol=0

for i in range (1,i1):
  if i2[i-1] > i2[i]:
    sol += i2[i-1] - i2[i]
    i2[i] = i2[i-1]
    
print(sol)

