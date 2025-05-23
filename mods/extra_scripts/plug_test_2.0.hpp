#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;


void rus(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

}
void start(){
	
}

void pe(){
system("pause");
}
void ct(int u){
	int s1=0;
	while(s1<=u){
	cout<<endl;
s1++;
}
}
void cl(){
	cout<<endl;
	system("pause");
	system("cls");
}
void c_pl(){
	int j=0;
	while(j<=600){
		cout<<"\b";
	}
}
void Sp(int slx){
	Sleep(slx);
}

void text(string str){
	cout<<str;
}

 void ct_p(int sl0){
 	Sleep(sl0);
 	cout<<endl;
 }

void SetColor(int text, int bg){
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

void name(string nm){
	string n1="title ";
}
void super_f(int time,string text_t,int c0,int c1, int d,bool f){
Sleep(time);
int final=0;
while(d<=final){
	ct(1);
	d--;
}
SetColor(c0,c1);
text(text_t);
if(f==1){
	SetColor(15,0);
}
}

void help(){
Sp(1278);
SetColor(15,4);
cout<<"небольшая библиотека для помощи в разработке";
ct(1);
SetColor(15,2);
cout<<"Функционал:";
SetColor(15,0);
Sp(750);
ct_p(1000);
SetColor(15,1);
ct(1);
cout<<"ct";
ct(1);
SetColor(4,1);
cout<<"1)(ct)отступ строки\n(вскобках количество отступов)";
ct_p(750);
ct(1);
SetColor(15,2);
cout<<"pe";
ct(1);
cout<<"2)(pe) system pause";
ct_p(1500);
SetColor(13,9);
SetColor(15,2);
ct(1);
cout<<"cl";
ct(1);
SetColor(15,4);
cout<<"3)(cl) отчистка экрана методом cls ";
ct_p(1200);
SetColor(15,1);
ct(1);
text("c_pl");
ct(1);
SetColor(15,8);
cout<<"4)(c_pl)отчистка экрана без бликов";
ct_p(1600);
SetColor(15,2);
ct(1);
text("Sp");
ct(1);
SetColor(15,3);
cout<<"5)(Sp)задержка, \nВ скобках значение в миллисекундах 1000 =1 сек";
ct_p(1600);
SetColor(15,2);
ct(1);
text("ct_p");
ct(1);
SetColor(15,2);
cout<<"6)(ct_p) для задержки и отступа , параметр время в миллисекундах";
ct_p(1500);
SetColor(15,4);
ct(1);
cout<<"rus";
SetColor(15,2);
ct(1);
text("7)(rus) полная руссификация текста\n");

ct_p(1700);
SetColor(15,4);
ct(1);
text("SetColor");
SetColor(15,2);
ct(1);
text("8)(SetСolor)Смена цвета любого конкретного символа,слова");
ct(1);


ct_p(1700);
SetColor(0,14);
ct(1);
text("super_f");
SetColor(15,4);
ct(1);
text("9)(super_f) мульти-команда для обработки теста\n");
ct(1);
text("параметры -задержка,текст для надписи,цвет 1,цвет 2,колличество отступов,возращение к стандартному тексту 1 или 0 ");
ct(3);
SetColor(15,2);
text("PS если использовать в связке с cin или getch()обязательно заменяйте пробелы на (_)");
ct(2);
super_f(2200,"                                            power by PM 2021                                                ",15,9,2,1);
ct(2);

SetColor(15,4);
SetColor(15,0);
pe();
SetColor(15,0);
cl();
}
