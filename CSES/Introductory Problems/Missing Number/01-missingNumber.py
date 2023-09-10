n1 = int(input())
n2 = [int(i) for i in input().split()]

s1 = sum(range(n1+1))
s2 = sum(n2)

print(s1-s2)
