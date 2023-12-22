# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
import tkinter as tk
import tkinter.ttk as ttk
import time
root=tk.Tk()
global label2
label2=ttk.Label(root,text="启动！")

def func1():
    label2.grid(row=1,column=2)

label1=ttk.Button(root,text="王析多，",command=func1)
label1.grid(row=1,column=1)

frame = tk.Frame(root)

root.mainloop()
