""""
class retangulo():
    def __init__(self, comprimento, largura):
        self.comprimento = comprimento
        self.largura = largura
    
    def area_final(self):
        return self.comprimento * self.largura
    
    def perimetro_final(self):
        return (self.comprimento + self.largura)*2
    
retangulo1 = retangulo(50, 100)
area = retangulo1.area_final()
perimetro = retangulo1.perimetro_final()

print(f"A area do retangulo e: {area}")
print(f"O perimetro do retangulo e: {perimetro}")
"""
"""""
class circulo():
    def __init__(self, pi, raio):
        self.pi = pi
        self.raio = raio
    
    def area(self):
        return round(self.pi*(self.raio * self.raio))
    
    def perimetro(self):
        return round(2*self.pi*self.raio)

circulo1 = circulo(3.14, 10)

area = circulo1.area()

perimetro = circulo1.perimetro()

print(f"A area do circulo e: {area:.2f}")
print(f"O perimetro do circulo e: {perimetro:.2f}")

"""""
"""""
class ContaBancaria:
    def __init__(self, saldo_inicial=0.0):
        self.saldo = saldo_inicial

    def depositar(self, valor):
        if valor > 0:
            self.saldo += valor
            print(f'Depósito de R${valor:.2f} realizado com sucesso. Novo saldo: R${self.saldo:.2f}')
        else:
            print('O valor do depósito deve ser maior que zero.')

    def sacar(self, valor):
        if valor > 0:
            if valor <= self.saldo:
                self.saldo -= valor
                print(f'Saque de R${valor:.2f} realizado com sucesso. Novo saldo: R${self.saldo:.2f}')
            else:
                print('Saldo insuficiente para realizar o saque.')
        else:
            print('O valor do saque deve ser maior que zero.')

    def verificar_saldo(self):
        print(f'Saldo atual: R${self.saldo:.2f}')

conta = ContaBancaria(saldo_inicial=1000.0)
conta.verificar_saldo()
conta.depositar(500.0)
conta.sacar(200.0)
conta.verificar_saldo()

"""""

"""""
class Pessoa:
    def __init__(self):
        self.nome = ""
        self.idade = 0

    def definir_nome(self, novo_nome):
        self.nome = novo_nome

    def definir_idade(self, nova_idade):
        if nova_idade >= 0:
            self.idade = nova_idade
        else:
            print("A idade deve ser um valor não negativo.")

    def exibir_informacoes(self):
        print(f"Nome: {self.nome}")
        print(f"Idade: {self.idade} anos")

pessoa1 = Pessoa()

pessoa1.definir_nome("João")
pessoa1.definir_idade(25)

pessoa1.exibir_informacoes()

"""""

"""""
class Carro:
    def __init__(self):
        self.marca = ""
        self.modelo = ""
        self.ano = 0

    def definir_marca(self, nova_marca):
        self.marca = nova_marca

    def definir_modelo(self, novo_modelo):
        self.modelo = novo_modelo

    def definir_ano(self, novo_ano):
        if novo_ano >= 0:
            self.ano = novo_ano
        else:
            print("O ano deve ser um valor não negativo.")

    def exibir_informacoes(self):
        print(f"Marca: {self.marca}")
        print(f"Modelo: {self.modelo}")
        print(f"Ano: {self.ano}")

carro1 = Carro()

carro1.definir_marca("Toyota")
carro1.definir_modelo("Corolla")
carro1.definir_ano(2022)

carro1.exibir_informacoes()
"""""

"""""
import math

class Triangulo:
    def __init__(self, lado1, lado2, lado3):
        self.lado1 = lado1
        self.lado2 = lado2
        self.lado3 = lado3

    def calcular_perimetro(self):
        return self.lado1 + self.lado2 + self.lado3

    def calcular_area(self):
        # Utilizando a fórmula de Herão para calcular a área de um triângulo
        s = self.calcular_perimetro() / 2
        area = math.sqrt(s * (s - self.lado1) * (s - self.lado2) * (s - self.lado3))
        return area

triangulo1 = Triangulo(lado1=3, lado2=4, lado3=5)

perimetro = triangulo1.calcular_perimetro()
area = triangulo1.calcular_area()

print(f"Perímetro do triângulo: {perimetro}")
print(f"Área do triângulo: {area}")

"""""

"""""
class Livro:
    def __init__(self):
        self.titulo = ""
        self.autor = ""
        self.ano_publicacao = 0

    def definir_titulo(self, novo_titulo):
        self.titulo = novo_titulo

    def definir_autor(self, novo_autor):
        self.autor = novo_autor

    def definir_ano_publicacao(self, novo_ano):
        if novo_ano >= 0:
            self.ano_publicacao = novo_ano
        else:
            print("O ano de publicação deve ser um valor não negativo.")

    def exibir_informacoes(self):
        print(f"Título: {self.titulo}")
        print(f"Autor: {self.autor}")
        print(f"Ano de Publicação: {self.ano_publicacao}")

livro1 = Livro()

livro1.definir_titulo("O Senhor dos Anéis")
livro1.definir_autor("J.R.R. Tolkien")
livro1.definir_ano_publicacao(1954)


livro1.exibir_informacoes()

"""""

"""""
class ContaBancaria:
    def __init__(self, saldo_inicial=0.0):
        self.saldo = saldo_inicial

    def depositar(self, valor):
        if valor > 0:
            self.saldo += valor
            print(f'Depósito de R${valor:.2f} realizado com sucesso. Novo saldo: R${self.saldo:.2f}')
        else:
            print('O valor do depósito deve ser maior que zero.')

    def sacar(self, valor):
        if valor > 0:
            if valor <= self.saldo:
                self.saldo -= valor
                print(f'Saque de R${valor:.2f} realizado com sucesso. Novo saldo: R${self.saldo:.2f}')
            else:
                print('Saldo insuficiente para realizar o saque.')
        else:
            print('O valor do saque deve ser maior que zero.')

    def verificar_saldo(self):
        print(f'Saldo atual: R${self.saldo:.2f}')


class ContaCorrente(ContaBancaria):
    def __init__(self, saldo_inicial=0.0, limite_credito=0.0):
        super().__init__(saldo_inicial)
        self.limite_credito = limite_credito

    def verificar_limite_credito(self):
        print(f'Limite de Crédito: R${self.limite_credito:.2f}')

    def sacar_com_limite(self, valor):
        if valor > 0:
            if valor <= (self.saldo + self.limite_credito):
                if valor <= self.saldo:
                    self.saldo -= valor
                    print(f'Saque de R${valor:.2f} realizado com sucesso. Novo saldo: R${self.saldo:.2f}')
                else:
                    self.limite_credito -= (valor - self.saldo)
                    self.saldo = 0
                    print(f'Saque de R${valor:.2f} realizado utilizando o limite de crédito. Novo saldo: R${self.saldo:.2f}')
                    print(f'Limite de Crédito restante: R${self.limite_credito:.2f}')
            else:
                print('Saldo e limite de crédito insuficientes para realizar o saque.')
        else:
            print('O valor do saque deve ser maior que zero.')


conta_corrente = ContaCorrente(saldo_inicial=1000.0, limite_credito=500.0)

conta_corrente.verificar_saldo()
conta_corrente.depositar(200.0)
conta_corrente.sacar(1200.0)  # Tentando sacar mais do que o saldo e o limite de crédito
conta_corrente.sacar(800.0)   # Sacando utilizando o saldo
conta_corrente.verificar_saldo()
conta_corrente.verificar_limite_credito()

"""""