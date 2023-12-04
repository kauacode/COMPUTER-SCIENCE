'''Criar um algoritmo que informe se a meta de 10 vendedores foi atingida
individualmente. Dê um nome para cada vendedor.'''

'''class Vendedor():
    def __init__(self, nome):
        self.nome = nome
        self.meta = 0

    def meta_final(self,meta):
        self.meta = meta
    
    def Situacao (self, meta):
        if self.meta > meta:
            print(self.nome, "Meta Atingida")
        else:
            print(self.nome, "Meta Não Atingida")
    
vendedor1 = Vendedor("Carlos")
vendedor1.meta_final(6000)
vendedor1.Situacao(10000)

print(vendedor1.meta)

vendedor2 = Vendedor("Ricado")
vendedor2.meta_final(8000)
vendedor2.Situacao(8000)

print(vendedor2.meta)

vendedor3 = Vendedor("Marcio")
vendedor3.meta_final(10000)
vendedor3.Situacao(9000)

print(vendedor3.meta)

vendedor4 = Vendedor("Paulo")
vendedor4.meta_final(8000)
vendedor4.Situacao(6000)

print(vendedor4.meta)

vendedor5 = Vendedor("Ian")
vendedor5.meta_final(12000)
vendedor5.Situacao(15000)

print(vendedor5.meta)

vendedor6 = Vendedor("Vagner")
vendedor6.meta_final(9000)
vendedor6.Situacao(6000)

print(vendedor6.meta)

vendedor7 = Vendedor("Jeff")
vendedor7.meta_final(18000)
vendedor7.Situacao(20000)

print(vendedor7.meta)

vendedor8 = Vendedor("Everton")
vendedor8.meta_final(7000)
vendedor8.Situacao(13000)

print(vendedor8.meta)

vendedor9 = Vendedor("John")
vendedor9.meta_final(4000)
vendedor9.Situacao(8000)

print(vendedor9.meta)

vendedor10 = Vendedor("Jessica")
vendedor10.meta_final(21000)
vendedor10.Situacao(20000)

print(vendedor10.meta)
'''

'''Crie um algoritmo que informe se 5 alunos foram aprovados.'''
'''class Aluno():
    def __init__(self, nome):
        self.nome = nome
        self.nota = 0

    def nota_final(self,nota):
        self.nota = nota
    
    def Situacao (self, meta):
        if self.nota > meta:
            print(self.nome, "Foi Aprovado")
        else:
            print(self.nome, "Não foi Aprovado")
    
aluno1 = Aluno("James")
aluno1.nota_final(8)
aluno1.Situacao(6)

print(aluno1.nota)

aluno2 = Aluno("Ricador")
aluno2.nota_final(8)
aluno2.Situacao(7)

print(aluno2.nota)

aluno3 = Aluno("Mario")
aluno3.nota_final(10)
aluno3.Situacao(8)

print(aluno3.nota)

aluno4 = Aluno("Pablo")
aluno4.nota_final(8)
aluno4.Situacao(7)

print(aluno4.nota)

aluno5 = Aluno("Igor")
aluno5.nota_final(9)
aluno5.Situacao(8)

print(aluno5.nota)
'''

'''Criar um algoritmo para apresentar o valor da cotação do dólar utilizando uma
API.'''
import requests
import json

url = "https://api.bcb.gov.br/dados/serie/bcdata.sgs.10813/dados?formato=json"

response = requests.get(url)

if response.status_code == 200:
    data = response.json()
    if data:
        ultima_cotacao = data[-1]
        data_cotacao = ultima_cotacao["data"]
        valor_cotacao = ultima_cotacao["valor"]

        print(f"Cotação do dólar em {data_cotacao}: R$ {valor_cotacao}")
    else:
        print("Nenhum dado de cotação encontrado.")
else:
    print("Falha na solicitação à API do Banco Central")
