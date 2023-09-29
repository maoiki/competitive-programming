n, m, k = [int(i) for i in input().split()]
a = sorted([int(i) for i in input().split()])
b = sorted([int(i) for i in input().split()])

c = 0
i=0
j=0

while i < n and j < m:
  dif = a[i] - b[j]
  if -k <= dif <= k:
    c += 1
    
    i += 1
    j += 1
  else:
    if dif > k:
      j += 1
    else:
      i += 1

print(c)
