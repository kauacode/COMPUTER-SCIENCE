"""1)
numero = int(input("Digite um número:  "))
while numero >= 0:
    print(numero)
    numero -= 1"""

"""2)
import random

numero_secreto = random.randint(1, 100)
palpite = 0

while palpite != numero_secreto:
    palpite = int(input("Adivinhe o número:  "))
    if palpite < numero_secreto:
        print("Tente um número maior.")
    elif palpite > numero_secreto:
        print("Tente um número menor.")
    else:
        print("Parabéns! Você acertou!")"""

"""3)
numero = int(input("Digite um número: "))
contador = 1

while contador <= 10:
    resultado = numero * contador
    print(numero, "x", contador, "=", resultado)
    contador +=1"""

"""4)
limite = int(input("Digite um número limite para a sequência de Fibonacci: "))
a, b = 0, 1

while a <= limite:
    print(a, end= ' ')
    a, b = b, a + b"""

"""5)
numero = int(input("Digite um número: "))
fatorial = 1
contador = 1

while contador <= numero:
    fatorial *= numero
    numero -= 1

print("O fatorial é", fatorial)"""