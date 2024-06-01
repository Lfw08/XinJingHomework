from tkinter import *
import tkinter as tk
import tkinter.ttk as ttk

txt1 = "Shabby"


root = tk.Tk()
root.title("SHABI")

canvas1 = tk.Canvas(root)

def func1():
    global txt1
    txt1 = txt1 + "*"
    root.update()

button1 = tk.Button(root,text = txt1,command=func1())
button1.grid()

root.update()

root.mainloop()


