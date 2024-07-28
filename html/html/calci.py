
from tkinter import *
def click (event):
        text= event.widget.cget("text")
        print(text)
        if text== "=":
            pass 
        elif text=="C":
            scvalue.set("")
            screen.update()
        
        else:
            scvalue.set(scvalue.get()+text)
            screen.update()
        
root=Tk()
root.geometry("644x900")
root.title("calaci")

scvalue= StringVar()
scvalue.set("")
screen=Entry(root,textvar= scvalue,font="italic 50 bold")
screen.pack(fill=X,ipadx=8,pady=10 ,padx=10)
f= Frame(root , bg="blue")
b=Button(f,text="9", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)

b=Button(f,text="7", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)

b=Button(f,text="8", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)
b=Button(f,text="+", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)
f.pack()
f= Frame(root , bg="blue")
b=Button(f,text="6", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)

b=Button(f,text="5", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)

b=Button(f,text="4", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)
b=Button(f,text="-", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)
f.pack()
f= Frame(root , bg="blue")
b=Button(f,text="3", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)

b=Button(f,text="2", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)

b=Button(f,text="1", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)
f.pack()
b=Button(f,text="0", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)

b=Button(f,text="*", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)
b=Button(f,text="-", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)
f.pack()

b=Button(f,text="/", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)
b=Button(f,text="=", padx=22 ,pady =28,font ="italic 40 bold")
b.pack(side=LEFT ,padx=18,pady=12)
b.bind("<Button-1>",click)


f.pack()
root.mainloop()
