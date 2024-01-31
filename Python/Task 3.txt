from tkinter import *

Window = Tk()
Window.geometry("300x500")
Label(Window, text="Enter a list of ratings:").place(x=80, y=25)
text=Text(Window, width=37, height=5, bg="white")
text.place(x=0, y=70)
but=Button(Window, text="Analyze")
but.place(x=100, y=250)
maximum=Label(Window, text="Maximum score:")
maximum.place(x=20, y=160)
minimum=Label(Window, text="Minimum score:")
minimum.place(x=20, y=180)
serednii=Label(Window, text="Average score:")
serednii.place(x=20, y=200)

frame=Frame(Window)
frame.place(x=70, y=290)
Label(frame, text="H",width=5).grid(row=0, column=0)
Label(frame, text="C",width=5).grid(row=0, column=1)
Label(frame, text="Д",width=5).grid(row=0, column=2)
Label(frame, text="В",width=5).grid(row=0, column=3)
n_label=Label(frame, text="",width=5)
n_label.grid(row=1, column=0)
s_label=Label(frame, text="",width=5)
s_label.grid(row=1, column=1)
d_label=Label(frame, text="",width=5)
d_label.grid(row=1, column=2)
v_label=Label(frame, text="",width=5)
v_label.grid(row=1, column=3)

def fun (event):
          a=[int(i) for i in text.get("1.0", END).split()]
          maximum["text"]= ("Maximum score:" +str(max(a)))
          minimum["text"]= ("Minimum score: "+str(min(a)))
          serednii["text"]= ("Average score: "+str(round(sum(a)/len(a), 1)))
          n=0
          s=0
          d=0
          v=0
          for i in a:
                    if i<=3:
                              n+=1
                    elif i>3 and i<=6:
                              s+=1
                    elif i>6 and i<=9:
                              d+=1
                    else:
                              v+=1
          n_label["text"]=n
          s_label["text"]=s
          d_label["text"]=d
          v_label["text"]=v
but.bind("<Button-1>", fun)
text.pack()
but.pack()
Window.mainloop()