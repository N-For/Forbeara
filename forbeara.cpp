#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <string>
#include <dir.h>
#include <math.h>
#include <urlmon.h>
#include <direct.h>
#include <stdio.h>
#pragma comment(lib, "winmm")
#include "mmsystem.h"
#include <algorithm>

#pragma comment(lib, "urlmon.lib")

using namespace std;

bool licesce[4];
int slv;
bool loc[4];

string scr[1000];
string mn0;
int b01;
int a01;

void script_a(){
fstream csl("mods/activate/plug.fbz");
a01=0;
while(scr[a01]!="end"){
getline(csl,scr[a01]);

if(scr[a01]!="end"){
a01++;
cout<<scr[a01]<<endl;
}

}
a01--;
b01=a01;
a01=0;
}

void script(){
	
}

enum ConsoleColor {

    Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray,
    DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
 
void setColor(unsigned fg, unsigned bg) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((bg << 4) | fg));
 
}
void pom(){

}

void text(){
	system("color 07");
	system("title  Forbeara  1.0 v   - IDE ");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int load=0;
//char *buffer = new char[2];
Sleep(432);
	int txt_i=0;
int chickl=1;//цикл
int x0=0;
int x1;
int x2[100];
int clear[5];
int stl;
string copy0;
string copy1[1000];
string copy2[1000];
int l0;
int l1;
int l2;
int l10;
int l11[1000];
int cs=0;
int str1=0;
int perem=0;

int file_men=0;
while(chickl!=0){
	cs++;
	Sleep(50);
	system("cls");
setColor(LightGreen, Black);
	cout<<"                                           ";
	setColor(LightGreen,Blue);
	cout<<"Mode: Code Editor\n";
setColor(LightGreen, Black);
cout<<"|--------------------------------------------------------------------------------------------------|\n";
setColor(White, Black);
//setColor()LightGreen,Blue);



//setColor(Green, Black);
fstream cpp("res/progect.res");

getline(cpp,mn0);
	ifstream txt_F("res/output/"+mn0);
	string txt[200000];
if(loc[1]==true){
cout<<"| № Строки\tСодержимое \t|\n\n";
}
if(loc[0]==true){
cout<<"| №  Number\tContent |\n\n";
}
if(loc[2]==true){
cout<<"| № Lenie\tInhalt |\n\n";
}
if(loc[3]==true){
cout<<"| № строки\tСодержимое |\n\n";
}

while(txt[txt_i]!="//final_engune"){
txt_i++;
getline(txt_F, txt[txt_i]);
//cout<<txt[txt_i]<<endl;
if(txt[txt_i]=="//final_engune"){
	cout<<"\r";
}else{
	if(load==0){
if(txt_i<=100){
	Sleep(150);
}else if(txt_i<=450 && txt_i>100){
	Sleep(100);
}else if(txt_i<=1150 && txt_i>450 ){
	Sleep(50);
}else if(txt_i<=2000  && txt_i>1150){
Sleep(15);		
}else if(txt_i==0){
Sleep(170);
}else{
	
}
}


int ll=0;
slv=txt[txt_i].find("switch ");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Yellow, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("break");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}
slv=txt[txt_i].find("case");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("int new");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("bool new");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}


slv=txt[txt_i].find("new");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Red, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}
slv=txt[txt_i].find("float new");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}
slv=txt[txt_i].find("char new");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}
slv=txt[txt_i].find("string new");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

//for(int cnt=0;cnt<=100;cnt++){
slv=txt[txt_i].find("class");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=1;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("cin");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightGreen, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("getline");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Yellow, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("char");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("string");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("float");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("bool");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("int main");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightRed, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}


slv=txt[txt_i].find("int");
if(perem==0){
if(slv==0){
if(txt[txt_i]!="int main(){"){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
}
}
}
slv=txt[txt_i].find("}while");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightMagenta, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("while");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightGreen, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}
slv=txt[txt_i].find("for");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightGreen, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}
slv=txt[txt_i].find("do");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("}else");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}



slv=txt[txt_i].find("if");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightGreen, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("//");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(DarkGray, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}


slv=txt[txt_i].find("ofstream");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("fstream");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightGreen, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}



slv=txt[txt_i].find("template");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightGreen,Blue);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("return");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Red, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("cout");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(LightCyan, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("Sleep");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Brown, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}


slv=txt[txt_i].find("system");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Brown, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("enum");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Yellow, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("using");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Yellow, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("#");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Green, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}





//классы

slv=txt[txt_i].find("public");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Brown, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("private ");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Brown, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}

slv=txt[txt_i].find("protected");
if(perem==0){
if(slv==0){
cout<<"\r\r\b|  "<<txt_i<<" \t-\t";
setColor(Brown, Black);
cout<<txt[txt_i]<<endl;
setColor(White, Black);
perem=2;
}else{
//cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}
}


//классы

slv=txt[txt_i].find("void");
if(perem==0){
	perem=1;
if(slv==0){


cout<<"\r\r|  "<<txt_i<<" \t-\t";
setColor(LightGreen, Black);

cout<<txt[txt_i]<<endl;
setColor(White, Black);

}else{
if(str1!=txt_i){
cout<<"|  "<<txt_i<<" \t-\t"<<txt[txt_i]<<endl;
}else{}
}
}





str1++;


perem=0;
//






//







///cout<<slv;




}


load++;


}
txt_F.close();
txt_i--;
int stroka00=txt_i;
/*
loc[0]=true;//usa
loc[1]=false;//rus
loc[2]=false;//ger
loc[3]=false;//user
*/
//if(loc[1]==true){
Sleep(21);


/*enum ConsoleColor {
    Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray,
    DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};*/
setColor(LightGreen, Black);
cout<<"|--------------------------------------------------------------------------------------------------|";
cout<<"                                             ";
setColor(LightGreen,Blue);
cout<<"Code Editor";
setColor(LightRed, Black);
cout<<"\n";

if(loc[1]==true){
cout<<"\t1)Добавить новую строку\t\t2)Изменить строку\t3)Отчистить строку(и) \n\t4)Отступить строку(и) от\t5)Копировать\t\t6)Вставить\n\t7)Вырезать \t\t\t8)Удалить строку(и)\t9)Скомпилировать\n\t10)Выполнить\t\t\t11)Добавить пометку\t12)Открыть панель пометок\n";
}
if(loc[0]==true){
cout << "\t1) Add new line \t\t2) Change line \t\t3) Read line (s) \n \t4) but leave \t\t\t5) Copy \t\t6) Insert \n \t7) Insert \t\t\t8) Delete line (s) \t9)Compile\n\t10)Execute\t\t\t11)Add Listing\t\t12)Open Listing Panel\n";
}
if(loc[2]==true){
cout << "\t1) Neue Zeile hinzufugen \t2)Zeile andern \t\t3) Zeile (n) lesen \n\t4) eine Zeile einrucken\t\t5) Kopieren \t\t6) Einfugen \n\t7) Einfugen \t\t\t8) Zeile (n) loschen \t9)Kompilieren\n\t10)Ausfuhren\t\t\t11)Listing hinzufugen \t12)Listing Panel offnen\n";
}
if(loc[3]==true){
cout << "\t1) Add new line \t\t2) Change line \t\t3) Read line (s) \n \t4) but leave \t\t\t5) Copy \t\t6) Insert \n \t7) Insert \t\t\t8) Delete line (s) \t9) Open graph  (GUI)\n";
}

setColor( LightMagenta,Red);
cout<<"->";
int result0;
setColor( White,Black);

cin>>result0;
setColor(LightGreen, Black);

if(result0==0){
break;
}
if(result0==3010){
script_a();	
}
if(result0==3020){
script();
	
}

if(result0<=-1){
	break;
}else if(result0==3){
cout <<"\nКакие строки удалить от до ?\n ";
setColor( White,Black);
cout<<"->";
int k0;
int k1;
int k3;
cin>>k0;
cout<<"\n  ->";
cin>>k1;
k3=k0-k1;
for(int k2=0; k2<=k3;k2++){
txt[k1]="";
k1++;
}


	ofstream update_file1("res/output/"+ mn0);
	//ПЕРЕЗАПИСЬ
	for(int up_dAte=0;up_dAte<=txt_i;up_dAte++){
//stroka00
	if(up_dAte==0){
			update_file1<<txt[up_dAte];	
	}
	if(up_dAte<stroka00 && up_dAte>0){
			update_file1<<txt[up_dAte]<<endl;	
	}
		if(up_dAte==stroka00){
			update_file1<<txt[txt_i];	
	}
	
	if(up_dAte>stroka00){
			if(up_dAte==txt_i){
}else{
			update_file1<<txt[up_dAte]<<endl;	
}
	}
		if(up_dAte==txt_i){
			update_file1<<txt[up_dAte];	
	 update_file1<<endl<<"//final_engune";
	}
		
		//ПЕРЕЗАПИСЬ

//
	}




}else if(result0==12){
	system("TASKKILL /F /IM bookmark.exe 2>NULL");
	Sleep(150);
	system("start bookmark.exe");
}else if(result0>12){
	
}else if(result0==11){
	file_men++;
	fstream filex("res/label.res");
	string filey[10000];
	int filez=0;
while(filey[filez]!="end"){
getline(filex,filey[filez]);
if(filey[filez]=="end"){
}else{
filez++;
}

}
filex.close();
int filez0=filez;
setColor( LightGreen,Blue);
	if(loc[1]==true){
cout<<"\nВведите вашу заметку : ";
}
	if(loc[0]==true){
cout<<"\nEnter your note :";
}
	if(loc[2]==true){
cout<<"\nGeben Sie Ihre Notiz ein :";	

}
setColor( White,Black);
cout<<" \n -> ";
string gas;
cin>>gas;
	system("TASKKILL /F /IM bookmark.exe 2>NULL");
	system("cls");
ofstream j02("res/label.res");
int lol=filez-1;
for(int hg=0;hg<=filez;hg++){
if(hg==filez){

}else{
j02<<filey[hg]<<endl;
}

}
j02<<gas<<endl<<"end";
j02.close();
cout<<endl;

}else if(result0==10){
	system("start start.bat");
}else if(result0==9){
		
system("TASKKILL /F /IM main.exe 2>NULL");
system("TASKKILL /F /IM cmd.exe 2>NULL");
system("cls");
//system("start Kompilieren.bat");
system("cls");
cout<<"Compile\n";
int slp=1650 + rand() % 3250;
Sleep(100);
system("start Compile.bat");
//system("cls");
cout<<"Ready\n";
Sleep(slp);
system("start res/output/cd/main.exe");
remove("res/output/MinGW64/bin/exe/main.exe");
remove("res/output/MinGW64/bin/main.exe");
remove("res/output/MinGW64/bin/main.cpp");
}else if(result0==8){
	setColor(LightGreen, Black);

	if(loc[1]==true){
cout<<"\nКакие строки удалять ? \n ";
}
	if(loc[0]==true){
cout<<"\nWhich lines need to be deleted, from to \n";
}
	if(loc[2]==true){
cout<<"\n Welche Zeilen mьssen gelцscht werden, von bis ? \n";	

}


setColor( White,Black);
cout<<"->";	
	cin>>l0;
cout<<"  ->";
cin>>l1;
l2=l0-l1;


	ofstream update_file("res/output/"+mn0);
	//ПЕРЕЗАПИСЬ
	for(int up_dAte=0;up_dAte<=txt_i;up_dAte++){
//stroka00
if(up_dAte==l1){
			for(int sk=0;sk<=l2;sk++){
			txt[l1]="\r";
//			update_file<<txt[l1];	
l1++;
}
l1=l10;
}


	if(up_dAte<l1 && up_dAte!=0){
			update_file<<txt[up_dAte]<<endl;	
	}else{
			update_file<<txt[up_dAte];		
	}
	if(up_dAte<l1 && up_dAte>l0){
			update_file<<endl<<txt[up_dAte];	
	}
		
	
	if(up_dAte>l0){
			if(up_dAte==txt_i){
}else{
			update_file<<endl;	
}
	}
		if(up_dAte==txt_i){
			update_file<<txt[up_dAte];	
	 update_file<<endl<<"//final_engune";
	}
		
		//ПЕРЕЗАПИСЬ

//
	}


}else if(result0==7){
	setColor(LightGreen, Black);

	if(loc[1]==true){
cout<<"Какие строчки скопировать ?\n ";
}
	if(loc[0]==true){
cout<<"\nWhich lines to copy, from to? \n";
}
	if(loc[2]==true){
cout<<"\n Welche Zeilen mussen von bis kopiert werden?  \n";	

}		
	setColor(White, Black);
	cout<<"->";
	cin>>l0;
	cout<<"\n  ->";
	cin>>l1;
	l2=l0-l1;
	l10=l1;
	l11[0]=l0;
	l11[1]=l1;
for(int l4=0;l4<=l2;l4++){
copy1[l1]=txt[l1];
/*cout<<copy1[l1]<<endl;
Sleep(800);*/
l1++;
}
l1=l10;
x1=1;


}else if(result0==5){
	x1=2;
	setColor(LightGreen, Black);
	
	if(loc[1]==true){
cout<<"\nКакую копировать строку от до ?\n";
}
	if(loc[0]==true){
cout<<"\nWhich lines to copy, from to ? \n";
}
	if(loc[2]==true){
cout<<"\n Welche Zeilen mussen von bis kopiert werden? \n";	

}
cout<<" ->";
	
	
	cin>>l0;
	setColor(White, Black);
	cout<<"\n  ->";
	cin>>l1;
	l2=l0-l1;
	l10=l1;
for(int l4=0;l4<=l2;l4++){
copy1[l1]=txt[l1];
/*cout<<copy1[l1]<<endl;
Sleep(800);*/
l1++;
}
l1=l10;
	
	
}else if(result0==6){
if(x1==0){
	setColor(Red, Blue);




if(loc[1]==true){
MessageBox(NULL,"Буффер не содержит данных !","Ошибка : пустой буффер",NULL);}
if(loc[0]==true){
MessageBox(NULL,"The buffer contains no data !","Error: empty buffer",NULL);}
if(loc[2]==true){
MessageBox(NULL,"Der Puffer enthalt keine Daten !","Fehler: leerer Puffer",NULL);
}

setColor(White, Black);
Sleep(1753);
}else{
setColor(LightGreen, Black);
	if(loc[1]==true){
cout<<"Перед какой строкой вставлять текст \b  ->";
}
	if(loc[0]==true){
cout<<"before which line to insert the text  \b  ->";}
	if(loc[2]==true){
cout<<"Vor welcher Zeile der Text eingefugt werden soll  \b  ->";
}


int stL;
setColor(Blue, Black);
cin>>stL;
if(x1==2){
	ofstream update_file100("res/output/"+mn0);
	//ПЕРЕЗАПИСЬ
	for(int up_dAte=0;up_dAte<=txt_i;up_dAte++){
//stroka00

		if(up_dAte==stL){
			for(int xis=0;xis<=l2;xis++){
		update_file100<<copy1[l1]<<endl;
		l1++;
}
l1=l10;
	}
	if(up_dAte==0){
			update_file100<<txt[up_dAte];	
	}
	if(up_dAte<stroka00 && up_dAte>0){
			update_file100<<txt[up_dAte]<<endl;	
	}
	
	if(up_dAte>stroka00){
			if(up_dAte==txt_i){
}else{
			update_file100<<txt[up_dAte]<<endl;	
}
	}
		if(up_dAte==txt_i){
			update_file100<<txt[up_dAte];	
	 update_file100<<endl<<"//final_engune";
	}
		
		//ПЕРЕЗАПИСЬ

//
	}
}else if(x1==1){


	ofstream update_file101("res/output/"+mn0);
	//ПЕРЕЗАПИСЬ
	for(int up_dAte=0;up_dAte<=txt_i;up_dAte++){
//stroka00
if(up_dAte==x0){
	txt[x0]="";
}
		if(up_dAte==stL){
		for(int xis1=0;xis1<=l2;xis1++){
		if(xis1<l2){
		
		update_file101<<copy1[l1]<<endl;
}else if(xis1==l2){
		update_file101<<copy1[l1];
	
}
copy1[l1]="";
txt[l1]="";
		l1++;
}
for(int xis2=0;xis2<=l2;xis2++){
	txt[l1]="";
}
l1=0;
x1=0;
	}
	if(up_dAte==0){
			update_file101<<txt[up_dAte];	
	}
	if(up_dAte<stroka00 && up_dAte>0){
			update_file101<<txt[up_dAte]<<endl;	
	}
	
	if(up_dAte>stroka00){
			if(up_dAte==txt_i){
}else{
			update_file101<<txt[up_dAte]<<endl;	
}
	}
		if(up_dAte==txt_i){
			update_file101<<txt[up_dAte];	
	 update_file101<<endl<<"//final_engune";
	}
		
		//ПЕРЕЗАПИСЬ

//
	}


}

}


}else if(result0==4){
	setColor(LightGreen, Black);
	
if(loc[1]==true){
cout <<"\n Перед какой строкой сделать отступ ?\n";
}
if(loc[0]==true){
cout <<"\n Which line to indent before ?\n";	
}
if(loc[2]==true){
cout<<"Vor welcher Zeile der Text eingefugt werden soll  \n  ->";
}	

cout <<" ->";
int str012;
setColor(Blue, Black);
cin>>str012;
	ofstream update_file12("res/output/"+mn0);
	//ПЕРЕЗАПИСЬ
	for(int up_dAte=0;up_dAte<=txt_i;up_dAte++){
//stroka00
	if(up_dAte==0){
			update_file12<<txt[up_dAte];	
	}
	if(up_dAte<stroka00 && up_dAte>0){
			update_file12<<txt[up_dAte]<<endl;	
	}

		if(up_dAte==str012){
			update_file12<<endl;	
	}
	
	if(up_dAte>stroka00){
			if(up_dAte==txt_i){
}else{
			update_file12<<txt[up_dAte]<<endl;	
}
	}
		if(up_dAte==txt_i){
			update_file12<<txt[up_dAte];	
	 update_file12<<endl<<"//final_engune";
	}
		
		//ПЕРЕЗАПИСЬ

//

	}


	
}else if(result0==2){
setColor(LightGreen, Black);

if(loc[1]==true){
cout<<"Какую строчку изменить ?\n-> ";
}
if(loc[0]==true){
cout <<"\n which line to change ?\n->";	
}
if(loc[2]==true){
cout<<"welche Zeile geandert werden soll\n ->";
}	
	
	int edit_str;
	setColor(White, Black);
	cin>>chickl;
	stroka00=chickl;
	if(chickl>txt_i){
		setColor(LightGreen, Black);
		
if(loc[1]==true){
cout<<"Ошибка , такой строчки нет ("<<chickl<<" > "<<txt_i<<")\n";
}
if(loc[0]==true){
cout<<" error, there is no such line ("<<chickl<<" > "<<txt_i<<")\n";
}
if(loc[2]==true){
cout<<"Fehler, es gibt keine solche Zeile\n ->";
}
		

		Sleep(3000);
	}else if(chickl<=0){
		setColor(LightGreen, Black);
		Sleep(2000);
		cout<<"Error ";
	system("pause");
	}else{
/*cout<<"\n Укажите кол-во пробелов в строке\n->";
int prob;
cin>>prob;

*/
setColor(LightGreen, Black);

if(loc[1]==true){
cout<<endl<<"\nПечатайте\n ";
}
if(loc[0]==true){
cout<<endl<<"\nPrint\n ";
}
if(loc[2]==true){
cout<<endl<<"\nDrucken\n ";

}


	int pechat=1;
	string pechat_s[10000];
txt[chickl]="\r";	
/*
int output_file=100;
int output_file1=output_file+chickl;
*/
fstream editr("res/edit.dat");
string editR;
getline(editr,editR);
	while(pechat_s[chickl]!=editR){
	if(pechat_s[chickl]==editR){
	}else{
		cout<<"\r";
	setColor(White, Black);
	cout<<"\t ->";
    getline(cin, pechat_s[chickl]);
//txt[chickl]=pechat_s[chickl] + pechat_s[chickl];
string jib;
if(pechat_s[chickl]==editR){
}else{
	
jib=jib + pechat_s[chickl] ;
jib=jib + " ";
txt[chickl] = jib;
}
//
if(pechat_s[chickl]=="r"){
txt[chickl]="";
}
	}
}
	ofstream update_file("res/output/"+mn0);
	//ПЕРЕЗАПИСЬ
	for(int up_dAte=0;up_dAte<=txt_i;up_dAte++){
//stroka00
	if(up_dAte==0){
			update_file<<txt[up_dAte];	
	}
	if(up_dAte<stroka00 && up_dAte>0){
			update_file<<txt[up_dAte]<<endl;	
	}
		if(up_dAte==stroka00){
			update_file<<txt[chickl]<<endl;	
	}
	
	if(up_dAte>stroka00){
			if(up_dAte==txt_i){
}else{
			update_file<<txt[up_dAte]<<endl;	
}
	}
		if(up_dAte==txt_i){
			update_file<<txt[up_dAte];	
	 update_file<<endl<<"//final_engune";
	}
		
		//ПЕРЕЗАПИСЬ

//
	}
	update_file.close();
	

}

system("cls");
txt_i=txt_i-txt_i;
//}

//txt_i=txt_i--;
/*	for(int txt_i1=1;txt_i1<=txt_i;txt_i1++){
//txt[txt_i]!="//final_engune
getline(txt_F, txt[txt_i1]);
txt_i++;
}
cout<<txt_i;
*/
}else if(result0==1){
ofstream date0("res/output/"+mn0);
date0<<"\r";
ifstream lll("res/set_indent.tup");
string lll1;
getline(lll,lll1);

if(lll1=="1"){
for(int j=0;j<=txt_i;j++){
	if(j==0){
	date0<<txt[j];		
	}else{
	cout<<"\b";
	date0<<txt[j]<<endl;	
}
}
}

if(lll1=="2"){
for(int h=0;h<=txt_i;h++){

	date0<<txt[h]<<endl;		
	

}
}
date0<<endl;
date0<<"//final_engune";
date0.close();
txt_i=txt_i-txt_i;
}

txt_i=txt_i-txt_i;
}
txt_i=txt_i-txt_i;
}//для расширенного режима работы


void is1(){
if(licesce[0]=true && licesce[1]==false){
rmdir("mods");	
rmdir("user script");
}

if(licesce[1]=true && licesce[2]==false){
rmdir("mod");	
rmdir("user script");
}

if(licesce[2]=true && licesce[3]==false){
rmdir("mods/activate");	
cout<<"Активировать встроенный плагин ?";
ofstream plug("res/plugin_setup.dat",ios::app);




}


if(licesce[3]=true){

#include "mods/activate/main.hpp"
#include "mods/activate/main2.hpp"
#include "mods/activate/main3.hpp"
#include "mods/activate/main4.hpp"
#include "mods/activate/main5.hpp"
#include "mods/activate/main6.hpp"
#include "mods/activate/main7.hpp"
#include "mods/activate/main8.hpp"
#include "mods/activate/main9.hpp"
#include "mods/activate/main10.hpp"
#include "mods/activate/main11.hpp"	
}
}

void update(){
	//https://files.000webhost.com/handler.php?action=download?action=download&path=%2Fver_up.info
mkdir("update");
URLDownloadToFileA( 0, "https://drive.google.com/uc?export=download&confirm=no_antivirus&id=1tQXTh6xpuhv4k9XzbGMOsQlqkLgXEPF-", "update/ver_up.info", 0, 0);
Sleep(500);
ifstream update0("update/ver_up.info");
string up_date;
string up_date1;
getline(update0,up_date);
int up_Date;
int up_Date1;
up_Date=atoi(up_date.c_str());
update0.close();
Sleep(200);
ifstream update1("res/ver/ver.txt");
getline(update1,up_date1);
up_Date1=atoi(up_date1.c_str());
cout<<endl<<endl<<endl;

/*
loc[0]=true;//usa
loc[1]=false;//rus
loc[2]=false;//ger
loc[3]=false;//user
*/


if(up_Date==up_Date1){
	if(loc[0]==true){
	cout<<"YOU USE A NEW VERSION\n";
}

	if(loc[1]==true){
	cout<<"Вы используете самую новую версию\n";
}
	if(loc[2]==true){
	cout<<"SIE VERWENDEN EINE NEUE VERSION\n";
}

	if(loc[3]==true){
	cout<<"new ver ! \n";
}



}else if(up_Date==0){
	//
		if(loc[0]==true){
	cout<<"No internet connection, please try again later\n";
}

	if(loc[1]==true){
cout<<"Нет подключения к интернету.Повторите попытку позже\n";}
	if(loc[2]==true){
	cout<<"Keine Internetverbindung, bitte versuchen Sie es spater erneut\n";
}

	if(loc[3]==true){
	cout<<"no connection  ! \n";
}
	
	//
	
}else{
	
	if(loc[0]==true){
	cout<<"YOU USE THE OLD VERSION \n";
	Sleep(1300);
	cout<<"Go to the download page";
	Sleep(2555);
	system("explorer https://vk.com/forbeara");
system("cls");

}

	if(loc[1]==true){
	cout<<"Вы используете старую версию \n";
	Sleep(1300);
	cout<<"Переход на страницу загрузки";
	Sleep(2555);
	system("explorer https://vk.com/forbeara");
system("cls");
}
	if(loc[2]==true){
	cout<<"SIE BENUTZEN DIE ALTE VERSION \n";
	Sleep(1300);
	cout<<"Zur Ladeseite gehen";
	Sleep(2555);
	system("explorer https://vk.com/forbeara");
system("cls");

}

	if(loc[3]==true){
	cout<<"dowload \n";
}
	
	
	
system("cls");
}
remove( "update/ver_up.info" );
//URLDownloadToFileW(0,L"https://files.000webhost.com/handler.php?action=download?action=download&path=%2Fver_up.info",L"res/update/ver_up.info",0,0);
//URLDownloadToFileA(0,"https://files.000webhost.com/handler.php?action=download?action=download&path=%2Fver_up.info","ver_up.info",0,0);


    /*HRESULT hr = URLDownloadToFileW(
        0,   // A pointer to the controlling IUnknown interface (not needed here)
        L"https://files.000webhost.com/handler.php?action=download?action=download&path=%2Fver_up.info",
        L"ver_up.info",
        0,      // Reserved. Must be set to 0.
        0); // status callback interface (not needed for basic use)

//HRESULT  URLDownloadToFileA(0, L"https://files.000webhost.com/handler.php?action=download?action=download&path=%2Fver_up.info", L"res/", 0,0);
/*HRESULT URLDownloadToFile(
             LPUNKNOWN            pCaller,
             LPCTSTR              szURL,
             LPCTSTR              szFileName,
  _Reserved_ DWORD                dwReserved,
             LPBINDSTATUSCALLBACK lpfnCB
);
*/
}


void start(){
	
	typedef BOOL (WINAPI *SETCONSOLEFONT)(HANDLE, DWORD);     // ???????? ?????????????????? ???????
 SETCONSOLEFONT SetConsoleFont;
HMODULE hmod = GetModuleHandleA("KERNEL32.DLL");     // ??????? ?????
  SetConsoleFont =(SETCONSOLEFONT) GetProcAddress(hmod, "SetConsoleFont");   // ????? ?? ?????
  if (!SetConsoleFont) {cout<<"error\n" ; exit(1);}   //   ???? ??????
  SetConsoleFont(GetStdHandle(STD_OUTPUT_HANDLE), 55);
	
	licesce[0]=false;
licesce[1]=false;
licesce[2]=false;
licesce[3]=false;

loc[0]=true;//usa
loc[1]=false;//rus
loc[2]=false;//ger
loc[3]=false;//user
	
	ifstream osn("res/local.lock");
	string local000;
	string local001;
	getline (osn,local000);
	if(local000=="language ="){
		getline(osn,local001);
		if(local001=="rus"){
		loc[1]=true;
		loc[0]=false;
		loc[2]=false;
		loc[3]=false;
		}
		if(local001=="ger"){
		loc[1]=false;
		loc[0]=false;
		loc[2]=true;
		loc[3]=false;
		}
		if(local001=="eng"){
		loc[1]=false;
		loc[0]=true;
		loc[2]=false;
		loc[3]=false;
		}
		if(local001=="user"){
		loc[1]=false;
		loc[0]=false;
		loc[2]=false;
		loc[3]=true;
		}
	}else{
		Sleep(3500);
		cout<<"localization file corrupted: configuration file corruption";
	Sleep(8500);
	for(int er0=0;er0<=70;er0++){
	cout<<"\b";
	}
}
	
	system("mode con cols=100 lines=30");
	srand(time(NULL));
	setlocale(LC_ALL,"RUS");
	system("title forbeara V 1.0");


ifstream lic10("res/license/license_min.lic");
string lic0;
getline(lic10,lic0);
if(lic0=="license#02312412"){
licesce[0]=true;
}else{
	cout<<"\a\b\r";
Sleep(4000);
exit(04201);
}
cout<<"\n";
cout<<"\n";

ifstream lic11("res/license/license.lic");
string lic_a11;
getline(lic11,lic_a11);
if(lic_a11=="lic#614u326o9"){
licesce[1]=true;
}else{

}
cout<<"\n";
cout<<"\n";
ifstream lic21("res/license/license_pro.lic");
string lic_a21;
getline(lic21,lic_a21);
if(lic_a21=="R0xVAmqUylRnqxkBjwNDXeLgTyRIjju71SPC64pvk4JBwW5GjLa4POfBeXao4uk2fZDaYTyaSaEfXzN2bO5Tudmz9nQ0K9ZPRtS"){
licesce[2]=true;
}else{

}
cout<<"\n";
cout<<"\n";
ifstream lic31("res/license/license_max.lic");
string lic_a31;
getline(lic31,lic_a31);
if(lic_a31=="FvxEmISFFzxF6LojZHmfS6xmJnpw7iWBGj4TUPrphPVbtcnjKBouyOH37ZuX2gpFsorf7JxdrlfNnuX0WellUVjOLFCKOUi11Af5cE2wQga4BZWo6aBPVNwxl910Mk8NK1JPEKbnQejk64AY36GVI6kTWmMAxEeaEQPbqTp1YzmSyPJxKijidw69JHs4ez3LgPNzB6BpwPaUvKk5VueYSbQsLbpPBotK4sci9BlJxHgrnwSXD6kuRbzuyPaqx1hdskokNBUd19upqffTcpgUrFfSlgbJgjPBv5L1xyfzrCOKIUwLaCvu2SqDlOzXOZoWpIo6iXQFAT2Wf4OYNmpzkeFkxQwrbv4N0X4VC4GATH6UELLkX9Ja2fnwYK1slk8s2MLCYq6O3U5UaDbDfkJhWQ02NGZBDL4CiwlRt4m6IyUC2VBe108LGVKmrBNXdMpn1DLTZaiy0Vn4u0gSRVgSDx69WvLuFBWQyAzqBKRty4qVXzDHlKrP2oJWKkjiO29fztw86fmtcFe85KzjnT9o2BbLOnUumOAL3YG86Vn3ru0p57CIm6UqqkueObIwEzqLQYSX5T0Y161LYEkcB4vShSWYUxsBlctAdXBPDPCY7grHege1b0pbkK7CIm6UqqkueObIwEzqLQYSX5T0Y161LYEkcB4vShSWYUxloYB8FsMvnwoeyifa1KmebjAWtiJi52umXWgvgTTwi3BJ"){
licesce[3]=true;
}else{

}


}

void lis2(){
	system("color 1A");
	system("cls");
	if(loc[1]==true){
cout<<"\n\n\nСоединение\n";
}
	if(loc[0]==true){
cout<<"\n\n\nConnection\n";
}
	if(loc[2]==true){
cout<<"\n\n\nVerbindung\n";	

}
Sleep(500);
URLDownloadToFileA( 0, "https://drive.google.com/uc?export=download&id=1SGoehS4ut5qo66_bBnd2DaTCsI3SrWUL", "res/license/lis.lic", 0, 0);
string g[100000];
string g1;
int lll=1;
ifstream lis01("res/license/online.key");
cout<<endl<<endl<<endl;
ifstream lis00("res/license/lis.lic");
system("cls");
getline(lis01, g1);
getline(lis00, g[lll]);
int start0=atoi(g[lll].c_str());

if(start0==0){

	if(loc[1]==true){
cout<<"\n\n\nНет Соединения : Копия Не Прошла Проверку\n";
}
	if(loc[0]==true){
cout<<"No Connection: No Copy Passed Verification\n";

}
	if(loc[2]==true){
cout<<"\n\n\nKeine Verbindung: Kopieren fehlgeschlagene Validierung\n";	

}

system("pause");
exit(1000);
}else{

g[lll]="\r\b";
g[0]="\r\b";
while(g[lll]!="end"){
lll++;
getline(lis00, g[lll]);
if(g[lll]=="end"){
g[lll]="\r";
lll--;
break;
}else{
}
//cout<<g[lll]<<endl;



}
lis01.close();
lis00.close();
remove( "res/license/lis.lic" );

	if(loc[1]==true){
cout<<"\n\n\nПроверка подлинности\n";
}
	if(loc[0]==true){
cout<<"\n\n\nAuthentication\n";
}
	if(loc[2]==true){
cout<<"\n\n\nAuthentifizierung\n";	
Sleep(750);
}
Sleep(1750);
int lll1=0;
int lll2=0;
for(int ls01=0;ls01<=lll;ls01++){
//cout<<"\t"<<g[lll1]<<"\t"<<g1<<endl;

if(g[lll1]==g1){
	
	if(loc[1]==true){
cout<<"\n\n\nЗавершение проверки\n";
}
	if(loc[0]==true){
cout<<"\n\n\nCompletion of the check\n";
}
	if(loc[2]==true){
cout<<"\n\n\nAbschluss der Prufung\n";	
}
Sleep(950);
lll2=1;
}else{
}
lll1++;
}

	//
	if(lll2==0){
	if(loc[1]==true){
cout<<"\n\n\nКопия вашей программы не прошла проверку на подлинность (Некорректный ключ)\n";
}
	if(loc[0]==true){
cout<<"\n\n\nA copy of your program was not authenticated(Invalid key)\n";
}
	if(loc[2]==true){
cout<<"\n\n\nEine Kopie Ihres Programms wurde nicht authentifiziert(Ungultiger Schlussel)\n";	
}	
Sleep(4200);
exit(4200);	
	//
}else{
}

lll1++;


}
Sleep(2000);
system("color 07");
}

void lisence(){
Sleep(3000);
ifstream lic10("res/license/license_min.lic");
string lic0;
getline(lic10,lic0);
if(lic0=="license#02312412"){
	
	
	//
	
	
	
	
//	cout<<"Минимальная лицензия активна !";
licesce[0]=true;
}else{
//	cout<<"\aМинимальная лицезия не активна !";
	Sleep(1500);
	cout<<"\a\b\r";
Sleep(4000);
exit(04201);
}
cout<<"\n";
cout<<"\n";
Sleep(2000);
ifstream lic11("res/license/license.lic");
string lic_a11;
getline(lic11,lic_a11);
if(lic_a11=="lic#614u326o9"){
//	cout<<"Лицензия активна !";
licesce[1]=true;
}else{
//	cout<<"\aЛецезия не активна !";

}
cout<<"\n";
Sleep(2400);
cout<<"\n";
ifstream lic21("res/license/license_pro.lic");
string lic_a21;
getline(lic21,lic_a21);
if(lic_a21=="R0xVAmqUylRnqxkBjwNDXeLgTyRIjju71SPC64pvk4JBwW5GjLa4POfBeXao4uk2fZDaYTyaSaEfXzN2bO5Tudmz9nQ0K9ZPRtS"){
//	cout<<"Про лицензия лицензия активна !";
licesce[2]=true;
}else{
//	cout<<"\aПро лицезия не активна !";

}
cout<<"\n";
Sleep(3400);
cout<<"\n";
ifstream lic31("res/license/license_max.lic");
string lic_a31;
getline(lic31,lic_a31);
if(lic_a31=="FvxEmISFFzxF6LojZHmfS6xmJnpw7iWBGj4TUPrphPVbtcnjKBouyOH37ZuX2gpFsorf7JxdrlfNnuX0WellUVjOLFCKOUi11Af5cE2wQga4BZWo6aBPVNwxl910Mk8NK1JPEKbnQejk64AY36GVI6kTWmMAxEeaEQPbqTp1YzmSyPJxKijidw69JHs4ez3LgPNzB6BpwPaUvKk5VueYSbQsLbpPBotK4sci9BlJxHgrnwSXD6kuRbzuyPaqx1hdskokNBUd19upqffTcpgUrFfSlgbJgjPBv5L1xyfzrCOKIUwLaCvu2SqDlOzXOZoWpIo6iXQFAT2Wf4OYNmpzkeFkxQwrbv4N0X4VC4GATH6UELLkX9Ja2fnwYK1slk8s2MLCYq6O3U5UaDbDfkJhWQ02NGZBDL4CiwlRt4m6IyUC2VBe108LGVKmrBNXdMpn1DLTZaiy0Vn4u0gSRVgSDx69WvLuFBWQyAzqBKRty4qVXzDHlKrP2oJWKkjiO29fztw86fmtcFe85KzjnT9o2BbLOnUumOAL3YG86Vn3ru0p57CIm6UqqkueObIwEzqLQYSX5T0Y161LYEkcB4vShSWYUxsBlctAdXBPDPCY7grHege1b0pbkK7CIm6UqqkueObIwEzqLQYSX5T0Y161LYEkcB4vShSWYUxloYB8FsMvnwoeyifa1KmebjAWtiJi52umXWgvgTTwi3BJ"){
//	cout<<"\aМакс лицензия лицензия активна !";
licesce[3]=true;
}else{
//	cout<<"\aПро лицезия не активна !";

}

cout<<"\n";
cout<<"\n";
Sleep(1500);
system("cls");


//

/*
	if(loc[0]==true){
cout<<"License type\tActive\n\n";
cout<<"\nMin	   \t"<<licesce[0]<<"\n";
cout<<"Common 	   \t"<<licesce[1]<<"\n";
cout<<"Pro         \t"<<licesce[2]<<"\n";
cout<<"Max         \t"<<licesce[3]<<"\n";

}

	if(loc[1]==true){
cout<<"Вид лицензии \tАктивна\n\n";
cout<<"\nМинимальная\t"<<licesce[0]<<"\n";
cout<<"Обычная	    \t"<<licesce[1]<<"\n";
cout<<"Продвинутая  \t"<<licesce[2]<<"\n";
cout<<"Максимальная \t"<<licesce[3]<<"\n";
}
	if(loc[2]==true){
cout<<"Lizenz-Typ  \tAktiv\n\n";	
cout<<"\nMinimum   \t"<<licesce[0]<<"\n";
cout<<"Regular     \t"<<licesce[1]<<"\n";
cout<<"Fachmann    \t"<<licesce[2]<<"\n";
cout<<"Maximal     \t"<<licesce[3]<<"\n";

}

	if(loc[3]==true){
cout<<"\nМинимальная  \t"<<licesce[0]<<"\n";
cout<<"Обычная	      \t"<<licesce[1]<<"\n";
cout<<"Продвинутая    \t"<<licesce[2]<<"\n";
cout<<"Максимальная   \t"<<licesce[3]<<"\n";
		
		}


//
/*
cout<<"Вид лицензии\tАктивна\n\n";
cout<<"\nМинимальная\t"<<licesce[0]<<"\n";
cout<<"Обычная	\t"<<licesce[1]<<"\n";
cout<<"Продвинутая\t"<<licesce[2]<<"\n";
cout<<"Максимальная\t"<<licesce[3]<<"\n";
*/
char final;
cout<<"\n->";
final=getch();
for(int unt=0;unt<=1000;unt++){
	cout<<"\b";
Sleep(1);


if(licesce[0]=true && licesce[1]==false){
rmdir("mods");	
rmdir("user script");
rmdir("localization/user");
}

if(licesce[1]=true && licesce[2]==false){
rmdir("mods");	
rmdir("user script");
}

if(licesce[2]=true && licesce[3]==false){
rmdir("mods");	

}

if(licesce[3]=true){
#include "mods/activate/main.hpp"
#include "mods/activate/main2.hpp"
#include "mods/activate/main3.hpp"
#include "mods/activate/main4.hpp"
#include "mods/activate/main5.hpp"
#include "mods/activate/main6.hpp"
#include "mods/activate/main7.hpp"
#include "mods/activate/main8.hpp"
#include "mods/activate/main9.hpp"
#include "mods/activate/main10.hpp"
#include "mods/activate/main11.hpp"	
}



}



}

void ScrollToBottom(){
 


}
//Use the code

	




void dir_dir(){
	mkdir("res");
mkdir("res/license");
mkdir("mods");
mkdir("user script");
mkdir("mods/activate");
mkdir("res/output");
mkdir("user script/headlines");
mkdir("localization");
mkdir("localization/rus");
mkdir("localization/usa(eng)");
mkdir("localization/ger");
mkdir("localization/user");
ofstream lock_r("localization/rus/rus.lock",ios::app);
ofstream lock_e("localization/usa(eng)/eng.lock",ios::app);
ofstream lock_g("localization/ger/ger.lock",ios::app);
ofstream lock_u("localization/user/user.lock",ios::app);
ofstream ("mods/activate",ios::app);

ofstream lic1("res/license/license_min.lic",ios::app);
ofstream lic2("res/license/license.lic",ios::app);
ofstream lic3("res/license/license_pro.lic",ios::app);
ofstream lic4("res/license/license_max.lic",ios::app);

lic1.close();
lic2.close();
lic3.close();
lic4.close();
}

void menu(){
	PlaySound(TEXT("0.wav") ,NULL, SND_FILENAME);
	string lock[1000];
ifstream loc_r0;
ifstream loc_r1;
if(loc[0]==true){
loc_r0.open("localization/usa(eng)/eng.lock");	
}
if(loc[2]==true){
loc_r0.open("localization/ger/ger.lock");	
}
if(loc[1]==true){
loc_r0.open("localization/rus/rus.lock");	

}
if(loc[3]==true){
loc_r0.open("localization/user/user.lock");	
}
getline(loc_r0,lock[0]);
system("cls");

fstream cm("res/lr/color_m.dat");
string cm1;
getline(cm,cm1);
if(cm1=="0"){
system("color 1A");
}
if(cm1=="1"){
system("color 07");
}
if(cm1=="2"){
system("color 70");
}

int ext=1;
while(ext!=5){
cout<<"____________________________________________________________________________________________________";
cout<<endl<<"                                       "<<lock[0]<<"                              v 1.0 (beta)";
cout<<"\n\n\n\n\n\n\n";
//loc_r1<<endl;
getline(loc_r0,lock[1]);
cout<<" 1) "<<lock[1];
getline(loc_r0,lock[2]);
cout<<"\n                                                                                                  \n 2) "<<lock[2]<<"";
getline(loc_r0,lock[3]);
cout<<"\n                                                                                                 \n\n 3) "<<lock[3];
getline(loc_r0,lock[4]);
cout<<"\n                                                                                                  \n\n\n 4) "<<lock[4];
getline(loc_r0,lock[5]);
cout<<"\n                                                                                                \n\n 5) "<<lock[5];
cout<<"\n\n____________________________________________________________________________________________________  -> ";
cin>>ext;
if(ext==1){
	
}//
if(ext==2){
int ext0;
system("cls");
if(loc[1]==true){
cout<<"____________________________________________________________________________________________________";
cout<<"\n";
cout<<"\n                               1) Выбрать язык интерфейса \n\n";
cout<<"                             2) Добавить флаги к компилятору \n\n";
cout<<"                      3) Изменить команду выхода редактирования строк \n\n";
cout<<"                                 4) Сбросить все заметки \n\n";
cout<<"                           5) Откатить IDE до базовых настроек \n\n";
cout<<"\____________________________________________________________________________________________________";
cout<<" -> ";
cin>>ext0;
if(ext0==1){
	string exts;
	cout<<"\n  -> ";
	cin>>exts;
		ofstream rem("res/local.lock");
	if(exts=="rus"){
		rem<<"language =\nrus";
	}
	if(exts=="ger"){
		rem<<"language =\nger";
	}
	if(exts=="eng"){

		rem<<"language =\neng";
	}
	rem.close();
}
if(ext0==2){

ofstream l5("res/output/Compile.bat");
l5<<"@echo off"<<endl;
l5<<"chcp 1251"<<endl;
l5<<"SetLocal EnableExtensions EnableDelayedExpansion"<<endl;
l5<<"cls"<<endl;
l5<<"cd.."<<endl;
fstream o0("res/pt.res");
string o1;
getline(o0,o1);
l5<<"chcp 1251"<<endl;

	
}

}




	
}//
if(ext==3){
	
	system("cls");

if(loc[1]==true){
	cout<<"Forbeara IDE  v 1.0 \nВы используете среду разработки Forbeara (Консольная Версия)\n ";
	cout<<"Автор : \n";
	system("pause");
	system("explorer https://vk.com/p_pm_msc_m");
	cout<<"Официальные группы автора  : \n";
	system("pause");
	system("explorer https://vk.com/forbeara");
	system("explorer https://steamcommunity.com/id/RTS0000/");

}
if(loc[2]==true){


	cout<<"Forbeara IDE  v 1.0 \nSie verwenden die Forbeara-Entwicklungsumgebung (Konsole)\n ";
	cout<<"Autor : \n";
	system("pause");
	system("explorer https://vk.com/p_pm_msc_m");
	cout<<"Offizielle Gruppen des Autors : \n";
	system("pause");
	system("explorer https://vk.com/forbeara");
	system("explorer https://steamcommunity.com/id/RTS0000/");

}

if(loc[0]==true){
	cout<<"Forbeara IDE  v 1.0 \nYou are using the Forbeara Development Environment (Console)\n ";
	cout<<"author : \n";
	system("pause");
	system("explorer https://vk.com/p_pm_msc_m");
	cout<<"Author's official groups : \n";
	system("pause");
	system("explorer https://vk.com/forbeara");
	system("explorer https://steamcommunity.com/id/RTS0000/");



}





}

if(ext==4){
update();
cout<<endl;
system("pause");
}

cout<<endl;
system("cls");
}
system("cls");
}//конец функции

void scrol(){
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsole,&csbi);
	csbi.dwSize.Y=20000;
	SetConsoleScreenBufferSize(hConsole,csbi.dwSize);
	for(int scrol0=20000;scrol0>0;--scrol0){

	}
}
void load000(){
	system("color 1A");
for(int ls0=0;ls0<=13;ls0++){
cout<<"\n\n\n\n";
cout<<"\n\n\n\n";
cout<<"\n\n\n\n";
cout<<"\n\t";
if(ls0==0){
cout<<"     \t               |                                  |\n";
cout<<"\t\t\tLoad 0% ";
}

if(ls0==1){
cout<<"     \t               |/                                 |\n";
cout<<"\t\t\tLoad 5%";
}

if(ls0==2){
cout<<"     \t               |///                               |\n";
cout<<"\t\t\tLoad 14%";
}

if(ls0==3){
cout<<"     \t               |/////                             |\n";
cout<<"\t\t\tLoad 19%";
}
if(ls0==4){
cout<<"     \t               |///////                           |\n";
cout<<"\t\t\tLoad 23%";
}

if(ls0==5){
cout<<"     \t               |//////////                        |\n";
cout<<"\t\t\tLoad 36%";
}
if(ls0==6){
cout<<"     \t               |/////////////                     |\n";
cout<<"\t\t\tLoad 49%";
Sleep(400);
}
if(ls0==7){
cout<<"     \t               |////////////////                  |\n";
cout<<"\t\t\tLoad 58%";
}
if(ls0==8){
cout<<"     \t               |///////////////////               |\n";
cout<<"\t\t\tLoad 64%";
}
if(ls0==9){
cout<<"     \t               |///////////////////////           |\n";
cout<<"\t\t\tLoad 70%";
Sleep(500);
}
if(ls0==10){
cout<<"     \t               |//////////////////////////        |\n";
cout<<"\t\t\tLoad 79%";
}

if(ls0==11){
cout<<"     \t               |//////////////////////////////    |\n";
cout<<"\t\t\tLoad 84%";
}
if(ls0==12){
cout<<"     \t               |///////////////////////////////// |\n";
cout<<"\t\t\tLoad 95%";
Sleep(900);
}
if(ls0==13){
cout<<"     \t               |#*//////////////////////////////*#|\n";
cout<<"\t\t\tLoad 100 %";
Sleep(1777);
}

Sleep(880);
system("cls");

}
system("color 07");
}
int main(){	
	start();
	scrol();
	dir_dir();

ifstream tet0("res/load.rtk");
string tet1;
getline(tet0,tet1);
//lis2();
//lisence();
if(tet1==""){
	load000();
ofstream tet2("res/load.rtk");
tet2<<"1";
}else{
}
	
//menu();
text();
	/*is1();
	system("cls");
	
update();
lisence();
*/
	


//system("explorer https://www.instagram.com/");
/*string str1;
string str2;
string str3;
ifstream name("localization/rus/lock.txt");
getline(name,str1);
getline(name,str2);
getline(name,str3);
cout<<""<<"\n"<<str1;
cout<<""<<"\n"<<str2;
cout<<""<<"\n\b\b"<<str3;
/*bs[0]="\a";
bs[1]="\b";
bs[3]="\d";
bs[4]="\e";
bs[5]="\f";  
bs[6]="\g";
bs[7]="\h";  
bs[8]="\i";  
bs[9]="\k";  
bs[10]="\l";  
bs[11]="\m";  
bs[12]="\n";  
bs[13]="\o";  
bs[14]="\p";  
bs[15]="\q";
bs[16]="\r";  
bs[17]="\s";  
bs[18]="\t";   
bs[20]="\v";  
bs[21]="\w";  
bs[23]="\y";  
bs[24]="\z";  
*/

  /*
for(int abc=0;abc<=26;abc++){
Sleep(1800);
cout<<bs[abc];
if(abc==15){
	cout<<"\r";
}
if(abc==6){
	cout<<"\t";
}
if(abc==4){
	cout<<"\v";
}
if(abc==20){
	cout<<"\b";
}
}
*/


}
