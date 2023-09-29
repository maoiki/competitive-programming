i1 = int(input())
 
e = []
s = []
 
for i in range (i1):
  a, b = input().split()
  e.append(int(a))
  s.append(int(b))
 
e.sort()
s.sort()
 
i = 0
j = 0
m = 0
c = 0
 
while i < i1 and j < i1:
  if e[i] < s[j]:
    c += 1
    i += 1
  else:
    c -= 1
    j += 1
    
  m = max(m, c)
 
print(m)