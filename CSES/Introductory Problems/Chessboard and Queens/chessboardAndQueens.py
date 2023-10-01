n = 8
sol = 0
col = [0] * n 
diag1 = [0] * n * 2
diag2 = [0] * n * 2

# creates matrix for input
t = []
for i in range (n):
  a = [j for j in input()]
  t.append(a)
 
def search(y):
  if y == n:
    global sol 
    sol += 1
 
    return
 
  else: 
    for x in range(n):
      if col[x] or diag1[x+y] or diag2[x-y+n-1] or t[x][y] == '*':
        continue
 
      col[x] = diag1[x+y] = diag2[x-y+n-1] = 1
      search(y+1)
      col[x] = diag1[x+y] = diag2[x-y+n-1] = 0
      
search(0)
print(sol)
 