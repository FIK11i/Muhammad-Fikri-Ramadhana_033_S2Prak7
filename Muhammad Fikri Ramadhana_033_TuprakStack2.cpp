//Progam konversi dari bilangan desimal ke bilangan biner, octal, heksa dengan menggunakan stack
#include<stdio.h>
#include<conio.h>

int MAXSTACK;
typedef int itemtype;

typedef struct
{
	itemtype objek[300];
	int h;
}Stack;

void insialisasi(Stack *S)
{
	S->h=0;
}

int empty(Stack *S)
{
	return (S->h==0);
}

int full(Stack *S)
{
	return (S->h==MAXSTACK);
}

void push(itemtype x, Stack *S)
{
	if(full(S))
	{
		printf(" Stack is full !\n");
	}
	else
	{
		S->objek[S->h]=x; 
		++(S->h);
	}
}

int pop(Stack *S)
{
	if(empty(S))
	{
		printf("stack kosong\n");
	}
	else
	{
		--(S->h);
		return (S->objek[S->h]);
	}
	
 return 0;
}


int a,b,c,d,e,pilih;
int input;
Stack tumpukan;
void biner();
void oktal();
void heksa();
int main()
{
	 printf("====== Konversi Desimal ke Biner, Oktal, dan Heksadesimal ======\n");
	 insialisasi(&tumpukan);
	 printf("\n Masukkan bilangan desimal = ");
	 scanf("%d", &input);
	 printf("\n---MENU---\n");
	 printf("1 untuk konversi ke biner\n");
	 printf("2 untuk konversi ke oktal\n");
 	 printf("3 untuk konversi ke heksa\n");
 	 printf("4 untuk keluar");
 while(pilih<4){
 	printf("\n\npilih :  ");
 	scanf("%d",&pilih);
 switch(pilih)
 {
 	case 1:
 		printf("bilangan binernya\n");
 		biner();break;
 	case 2:
 		printf("bilangan oktalnya\n");
 		oktal();break;
 	case 3:
 		printf("bilangan heksadesimalnya\n");
 		heksa();break;
	 case 4:
		 printf("--silahkan tekan enter sekalilagi");
 }}
 	getch();
 	return 0;
}


void oktal(){
	for(d=1,b=input;b>0;b=b/8,d++)
 	{
		 MAXSTACK=d;
		 c=b%8;
		 push(c,&tumpukan);
 	}
	for(a=MAXSTACK;a>0;a--)
 	{
 	printf("%d", pop(&tumpukan));
 	}
}


void biner(){
	for(d=1,b=input;b>0;b=b/2,d++)
	 {
		 MAXSTACK=d;
 		 c=b%2;
		 push(c,&tumpukan);
	 }
	 for(a=MAXSTACK;a>0;a--)
	 {
	 printf("%d", pop(&tumpukan));
	 }
}


void heksa(){
	for(d=1,b=input;b>0;b=b/16,d++)
	 {
		 MAXSTACK=d;
		 c=b%16;
	 push(c,&tumpukan);
	 }
	 for(a=MAXSTACK;a>0;a--)
 	 {
 		e=pop(&tumpukan);
 		if(e<=9)
 		printf("%d",e);
 		else if(e==10)printf("A");
		else if(e==11)printf("B");
		else if(e==12)printf("C");
 		else if(e==13)printf("D");
 		else if(e==14)printf("E");
 		else if(e==15)printf("F");
	 }
}
