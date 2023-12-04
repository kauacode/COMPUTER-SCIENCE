import tkinter as tk
from tkinter import simpledialog

def calculaMedia():
    nota1 = simpledialog.askfloat("Solicite a primeira nota", "Primeira nota: ")
    nota2 = simpledialog.askfloat("Solicite a segunda nota", "Segunda nota: ")
    nota3= simpledialog.askfloat("Solicite a terceira nota", "Terceira nota: ")
    if nota1 and nota2 and nota3 is not None:
        media= (nota1 + nota2 + nota3)/3
        resultado_label.config(text=f'Media das tres notas:  {media}')
 
calculadoraMedia = tk.Tk()
calculadoraMedia.title("Calculadora de Media")
calculadoraMedia.geometry("800x400")

resultado_label = tk.Label(calculadoraMedia, text="")
resultado_label.pack(pady=20)

botao = tk.Button(calculadoraMedia, text="Calcular media 3 notas:", command=calculaMedia)
botao.pack()

calculadoraMedia.mainloop()
      