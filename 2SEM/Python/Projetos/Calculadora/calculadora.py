import tkinter as tk

def clicar_botao(valor):
    texto_atual = entrada.get()
    entrada.delete(0, tk.END)
    entrada.insert(0, texto_atual + valor)

def calcular():
    try:
        resultado = eval(entrada.get())
        entrada.delete(0, tk.END)
        entrada.insert(0, str(resultado))
    except Exception as e:
        entrada.delete(0, tk.END)
        entrada.insert(0, "Erro")

def limpar():
    entrada.delete(0, tk.END)

janela = tk.Tk()
janela.title("Calculadora")
janela.geometry("300x400")

janela.resizable(width=False, height=False)

cor_verde = "#009B3A"
cor_amarela = "#FFCC29"
cor_azul = "#0051A0"


janela.configure(bg=cor_verde)

entrada = tk.Entry(janela, width=16, font=('Arial', 20), bd=5, justify='right', bg=cor_azul, fg="white")
entrada.grid(row=0, column=0, columnspan=4, sticky='nsew')

botoes = [
    '7', '8', '9',
    '4', '5', '6',
    '1', '2', '3',
    '0', '+', '-',
    '*', '/', '.'
]

row_val = 1
col_val = 0

for i in range(4):
    janela.grid_columnconfigure(i, weight=1)

for btn in botoes:
    tk.Button(janela, text=btn, font=('Arial', 16), command=lambda btn=btn: clicar_botao(btn), bg=cor_amarela, fg=cor_verde).grid(row=row_val, column=col_val, padx=2, pady=2, sticky='nsew')
    col_val += 1
    if col_val > 2:
        col_val = 0
        row_val += 1

tk.Button(janela, text='C', font=('Arial', 16), command=limpar, bg=cor_amarela, fg=cor_verde).grid(row=row_val, column=0, padx=2, pady=2, sticky='nsew')
tk.Button(janela, text='=', font=('Arial', 16), command=calcular, bg=cor_amarela, fg=cor_verde).grid(row=row_val, column=1, columnspan=2, padx=2, pady=2, sticky='nsew')

for i in range(1, 6):
    janela.grid_rowconfigure(i, weight=1)

janela.mainloop()
