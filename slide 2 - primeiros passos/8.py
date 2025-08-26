# ler dois números n1 e n2 Exibir todos os números entre n1 e n2 Fazer em Python e em C 

n1 = int(input("insira um numero: "))
n2 = int(input("insira um numero: "))
maior = 0
menor = 0

if n1 < n2:
    menor = n1 
    maior = n2 

else:
    menor = n2
    maior = n1 # bloco usado para percorrer um intervalo sem se preocupar com a ordem q o user digitou 

for i in range(n1,n2 + 1): # +1 para incluir o ultimo numero
    print(i)