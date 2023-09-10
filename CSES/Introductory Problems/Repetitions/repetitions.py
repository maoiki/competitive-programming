x = input()

c = 1
sol = 1

for i in range (1,len(x)):
  if x[i] == x[i-1]:
    c += 1
  else:
    c = 1

  if c > sol:
    sol = c

print(sol)
