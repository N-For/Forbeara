from tkinter import *
from PIL import ImageTk, Image
import os
from time import sleep
import tkinter as tk
def startcli():
    os.system('forbeara.exe')
    exit(412)

root =Tk()
root.title('forbeara - Launcher')
root.geometry('1920x740')
root.resizable(False,False)
root.configure(background='DARKBLUE')
#root.wm_attributes('-alpha',0.884)
root.iconbitmap('forbeaza.ico')

img = ImageTk.PhotoImage(Image.open("res\lr\cli.gif"))
img1 = ImageTk.PhotoImage(Image.open("res\lr\cli1.gif"))

ls='Green'
panel1= Button(root, image = img1,command=startcli,relief=SUNKEN,bd=3,bg='White')
panel = Button(root, image = img,command=startcli,bg='BLACK',bd=3,relief=FLAT)



L2=Label(root,text='Which version of the program to run?',font=("Bauhaus 93",50),padx=10,background='DARKBLUE',fg='GREEN',activebackground ='GREEN')
L3=Label(root,text='             CLI (Console)                                                Graphical user interface (GUI)',font=("Gill Sans Ultra Bold",30),background='DARKBLUE',fg='GREEN',relief=FLAT)



Ll=Label(root,text='Launcher',font=("italic",35),padx=100)

#panel.pack(padx= 30,pad=100)


#Ll.grid()
L2.pack()
L3.pack(padx=10)



panel.pack(side=LEFT,padx=15)
panel1.pack(side=RIGHT)

##btn0.grid()anchor
root.mainloop()

