i1 = int(input())
i2 = [int(i) for i in input().split()]

i2.sort()

print(len(set(i2)))
