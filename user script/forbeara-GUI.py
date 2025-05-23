
from tkinter import*



class Window:
    def __init__(self,width,height,title = 'Mywindow',resizable =(False,False),icon='None',config='Black'):
                 self.root =Tk()
                 self.root.title(title)
                 self.root.geometry(f'{width}x{height}+100+150')
                 self.root.resizable(resizable[0],resizable[1])
                 self.root.configure(background=f'{config}')                 
                 self.root.resizable(resizable[0],resizable[1])
                 if icon:
                     self.root.iconbitmap(icon)
                 def run(self):
                    self.root.mainloop()
                    
root =Tk()
root.title('forbeara-GUI')
root.geometry('1200x800')
root.resizable(False,False)
root.configure(background='Black')                 
root.iconbitmap('forbeaza.ico')

c1 =Canvas (root,width=600,height=750,bg='Red',scrollregion = (0,0, 230, 5000))
c1.sbar = Scrollbar(orient=VERTICAL)

#for i in range(50):
    #Entry(c1, width=30).pack(side=TOP)

c1['yscrollcommand'] = c1.sbar.set
c1.sbar['command'] = c1.yview

c1.sbar.pack(side=RIGHT, fill=Y)

c2 =Canvas (root,width=1200,height=50,bg='Green')
c4 =Canvas (root,width=200,height=750,bg='Blue',scrollregion = (0,0, 230, 5000))

c4.sbar = Scrollbar(orient=VERTICAL)
c4['yscrollcommand'] = c4.sbar.set
c4.sbar['command'] = c4.yview

c4.sbar.pack(side=RIGHT, fill=Y)


c3 =Canvas (root,width=600,height=50,bg='Gray')

frame4 = Frame(root,bg='Blue')
frame3 = Frame(root,bg='Red')
frame1 = Frame(root,bg='Green')
frame2 = Frame(root,bg='Gray')

#frame4.place(relwidth=0.5,relheight=0.9)
#frame1.place(relx=0.5,relwidth=0.5,relheight=0.9)
c2.pack()
c4.place(relwidth=0.1,relheight=0.9)
c1.place(relx=0.1,relwidth=1,relheight=0.9)
c3.place(rely=0.9,relwidth=1,relheight=0.2)
#btn = Button(text="Лайк",          # текст кнопки 
 #            background="lightBlue",     # фоновый цвет кнопки
  #           foreground="darkGreen",     # цвет текста
   #          padx="50",             # отступ от границ до содержимого по горизонтали
    #         pady="50",              # отступ от границ до содержимого по вертикали
     #        font="10"              # высота шрифта
      #       )
#btn.pack()                    self.root.mainloop()
root.mainloop()
#window.run()

