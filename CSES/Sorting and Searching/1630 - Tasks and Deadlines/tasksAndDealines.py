n = int(input())
tarefas = []
final = 0
sol = 0
 
for i in range (n):
  a, d = input().split() 
  tarefas.append((int(a), int(d)))


tarefas.sort()

for tarefa in tarefas:
    final += tarefa[0]
    sol +=  tarefa[1] - final

print(sol)

