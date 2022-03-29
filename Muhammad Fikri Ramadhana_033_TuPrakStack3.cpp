//Progam Pembalik Kalimat/Kata
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

struct Tumpukan
    {

    char list[25];
    int up;

    }A;

void push (char x){
    if(A.up==25)
	{
        cout<<" Tumpukan sudah penuh !";
        getch();
    }
	else
    {
    	A.up=A.up+1;
    	A.list[A.up]=x;
	}
}

char pop()
{
	char hasil;
    if(A.up==0)
	{
		cout<<" Tumpukan kosong !";
		hasil=' ';
	}
   else
   {
		hasil=A.list[A.up];
		A.up=A.up-1;
	}	
   return hasil;
}

int main()
{
    int i;
    char kalimat[100];
    system("CLS");
    A.up=0;

    cout<<" Masukan kalimat : ";
	cin.getline(kalimat,sizeof(kalimat));

    system("CLS");
    cout<<" Kalimat Awal : "<<kalimat;

     for(i=0; i<strlen(kalimat); i++)
      {
        push(kalimat[i]);
      }
    cout<<"\n Kalimat Setelah di Balik : ";

    for(i=0; i<strlen(kalimat); i++)
    {
        cout<<pop();
    }
    cout<<endl;

    return 0;
}
