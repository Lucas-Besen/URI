
while(True):
    try:
        coluna,linha = map(int, input().split())
        MatrizCidade=[]
        arry1=[]
        arry2=[]
        for c in range(coluna):
            MatrizCidade.append(input().split())

        for x in range(coluna):
            for y in range(linha):
                if(int(MatrizCidade[x][y])!=0):
                    if(int(MatrizCidade[x][y])==1):
                        arry1.append(x)
                        arry1.append(y)
                    else:
                        arry2.append(x)
                        arry2.append(y)
        total = abs(arry1[0] - arry2[0]) + abs(arry1[1] - arry2[1]) 
        print(total)
    except EOFError:
        break

