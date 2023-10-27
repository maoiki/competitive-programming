n = int(input())
end = 0
sol = 0
movies = []
 
for i in range (n):
  a, b = input().split() 
  movies.append([int(a), int(b)])
 
# ordena com base no final (2o elemento)
movies.sort(key=lambda x: x[1])
 
for movie in movies:
    if movie[0] >= end:
        end = movie[1]
        sol += 1    
 
print(sol)