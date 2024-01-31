from tkinter import *


def calc():
    array = [int(i) for  i in edit.get('1.0', END).split()]
    if len(array)!= 0:
        result1 = Label(text = "Minimum"+ str(min(array)), font = "16")
        result2 = Label(text = "Maximum"+ str(max(array)), font = "16")

        result1.pack()
        result2.pack()
        
window = Tk()
window.title("Finding the lowest and highest price")
window.geometry("400x300+300+250")

label = Label(text = "Enter price list", font = "16")
edit = Text(window, width = 40, height = 10)
but = Button(window,text ="Calculate", font= "16", command = calc )

label.pack()
edit.pack()
but.pack()
window.mainloop()