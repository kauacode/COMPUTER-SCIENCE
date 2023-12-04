import tkinter as tk
from tkinter import simpledialog

def converteTemp():
    temp = simpledialog.askfloat("Solicite a temperatura", "Digite a temperatura em graus celsius")
    if temp is not None:
        tempConvertida = (temp * 9/5) + 32
        resultado_label.config(text=f'Temperatura convertida: {tempConvertida} °F')


temperatura = tk.Tk() 
temperatura.title("Conversão de temperatura")
temperatura.geometry("800x400")

resultado_label = tk.Label(temperatura, text="")
resultado_label.pack(pady=20)

botao = tk.Button(temperatura, text="Converter temperatura", command=converteTemp)
botao.pack()

temperatura.mainloop()