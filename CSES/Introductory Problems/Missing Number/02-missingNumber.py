n1 = int(input())
n2 = [int(i) for i in input().split()]

n2.sort()

for i in range(n1-1):
    v = n2[i]
    if i != len(n2) - 1:
        if v + 1 != n2[i + 1]:
            print(v + 1)
            break
    else:
        if n2[-1] < n1:
            print(v + 1)
        else:
            print(1)