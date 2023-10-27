n = int(input())

for i in range(n):
    s = input()
    c = 0
    c2 = 0

    for j in s:
        if j == 'L':
            c2 += 1
        else: 
            c2 = 0
        
        c = max(c, c2)

    print(c+1)