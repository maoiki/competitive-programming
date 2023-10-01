size, target = [int (i) for i in input().split()]
a = [int (i) for i in input().split()]

b = a.copy()
b.sort()

imp = True

i = 0
j = size-1
 
while j>i:
  if b[i] + b[j] == target:
    imp = False
    bi = a.index(b[i])
    a[bi] = 0
    bj = a.index(b[j])
    print(bi+1, bj+1)
    break

  else:
    if b[i] + b[j] > target:
      j -= 1
    elif b[i] + b[j] < target:
      i += 1
 
if(imp):
  print('IMPOSSIBLE')