import tkinter as tk
from tkinter import simpledialog

def retornaImpar():
    numInteiro = simpledialog.askinteger("Solicite numeros inteiros e positivos", "Digite numeros inteiros e positivos")
    if numInteiro is not None and numInteiro > 0:
        impares = [i for i in range(1, numInteiro+1, 2)]
        resultado_label.config(text=f'Numeros impares dentro da sequencia:  {impares}')

retornaNumeros = tk.Tk()
retornaNumeros.title("Retorna numeros inteiros e positivos")
retornaNumeros.geometry("800x400")

resultado_label = tk.Label(retornaNumeros, text="")
resultado_label.pack(pady=20)

botao = tk.Button(retornaNumeros, text="Retorna numeros inteiros e positivos", command=retornaImpar)
botao.pack()

retornaNumeros.mainloop()
