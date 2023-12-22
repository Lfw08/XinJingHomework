
import tkinter as tk
import tkinter.ttk as ttk
import tkinter.simpledialog as dlg
import time

root=tk.Tk()
global label2
label2=ttk.Label(root,text="   炸机！   ")

def func1():
    label2.grid(row=1,column=2)
    root.update()
    time.sleep(1.5)
    dlg1=dlg.Dialog(root,title="炸机成功！")

label1=ttk.Button(root,text="    老芦，   ",command=func1)
label1.grid(row=1,column=1)

frame = tk.Frame(root,height=600,width=800)

root.mainloop()
