
size = int(input())
name=[]
value=[]
children=[]

for i in range(size):
    dice = input().split()
    children.append({name: dice[0], value: dice[1] })
   

for  j in range(size):
    print('Vencedor(a):',children)