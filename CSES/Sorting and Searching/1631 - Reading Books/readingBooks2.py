# smallest code as possible
n = int(input())
b = [int(i) for i in input().split()]
b.sort()
print(max(sum(b), 2*b[-1]))