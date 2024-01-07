import tkinter as tk
<<<<<<< HEAD
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
=======
from tkinter import simpledialog

def check_narcissistic():
    num = entry.get()
    if len(num) != 3 or not num.isdigit():
        simpledialog.messagebox.showinfo('提示', '请输入一个三位数！')
        return

    num = int(num)
    sum = 0
    for i in str(num):
        sum += int(i) ** 3

    if sum == num:
        simpledialog.messagebox.showinfo('结果', '是水仙花数')
    else:
        simpledialog.messagebox.showinfo('结果', '不是水仙花数')

root = tk.Tk()
root.title('水仙花数检查')

frame = tk.Frame(root)
frame.pack()
>>>>>>> a34b7311ac89364bb7dd6f7558b6ab731cc89582

entry = tk.Entry(frame)
entry.pack(side=tk.LEFT)

button = tk.Button(frame, text='确定', command=check_narcissistic)
button.pack(side=tk.LEFT)

root.mainloop()