import tkinter as tk
from tkinter import simpledialog

def calcular_media():
    numero1 = simpledialog.askfloat("Solicite o primeiro número", "Digite o primeiro número")
    numero2 = simpledialog.askfloat("Solicite o segundo número", "Digite o segundo número")
    
    if numero1 is not None and numero2 is not None:
        media = (numero1 + numero2) / 2
        resultado_label.config(text=f"A média dos números é: {media:.2f}")
    else:
        resultado_label.config(text="Preencha ambos os números")

# Criar janela
janela = tk.Tk()
janela.title("Calculadora de Média")

# Criar o rótulo para apresentar o resultado
resultado_label = tk.Label(janela, text="")
resultado_label.pack(pady=20)
# Criar um botão para solicitar os valores
botao = tk.Button(janela, text="Calcular a média", command=calcular_media)
botao.pack()

# Manter a janela aberta
janela.mainloop()