import tkinter as tk
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

entry = tk.Entry(frame)
entry.pack(side=tk.LEFT)

button = tk.Button(frame, text='确定', command=check_narcissistic)
button.pack(side=tk.LEFT)

root.mainloop()