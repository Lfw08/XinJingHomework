
import tkinter as tk
import tkinter.ttk as ttk
import time
root=tk.Tk()
global label2
label2=ttk.Label(root,text="炸机，启动！")

def func1():
    label2.grid()
    time.sleep(5)

label1=ttk.Button(root,text="老芦",command=func1)
label1.grid(row=0,column=0)

frame = tk.Frame(root)

root.mainloop()
