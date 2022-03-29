//Lakukan Operasi yang diinginkan
#include <stdio.h>
#define MAKS 40

int z=0;
typedef char type;

typedef struct
{
	char objek[MAKS];
	int h;
}Stack;

void insialisasi(Stack *S)
{
	S->h=0;
}

int full(Stack *S)
{
	return(S->h==MAKS);
}

int empty(Stack *S)
{
	return(S->h==0);
}

void push(type x, Stack *S)
{
	if(full(S))
	{
		printf("Stack tidak dapat masuk karena sudah penuh\n");
	}
	else
	{
		S->objek[S->h]=x;
		printf(" Stack berada diindex ke %d\n", x, S->h);
		++(S->h);
	}
}

int duar(Stack *S, char copy[MAKS])
{
	if(empty(S))
	{
		printf("Stack masih kosong\n");
	}
	else
	{
		--(S->h);
		copy[z]=S->objek[S->h];
		printf("%c Telah keluar dari stack", S->objek[S->h]);
	}
	return z;
}

void list(Stack *S)
{
	int b=0;
	printf("Masukkan Stack");
	while (b<S->h)
	{
		printf("%c",S->objek[b++]);
	}
	printf("\n");
}

int main()
{
	char copy[MAKS];
	int b,c,d;
	char input;
	Stack tumpukan;
	
	insialisasi(&tumpukan);
	
	printf(" Masukkan input, jika char maka akan masuk ke dalam stack dan jika yang dimasukan adalah operator maka akan pop lalu cetak hasilnya\n");
	
	for(b=0;b!=MAKS;b++)
	{
		printf("\n Input : ");
		scanf("%c",&input);
		fflush(stdin);
		
		if(input == '*' || input == '/' || input == '-' || input == '+')
		{
			d=duar(&tumpukan, copy);
			list(&tumpukan);
			
			c=0;
			printf("Daftar : ");
			while (c<z)
			{
				printf("%d\n", copy[c++]);
			}
		}
		else if(input=='^')
		{
			break;
		}
		else
		{
			push(input, &tumpukan);
		}
		for(b=0;b<d;b++)
		{
			printf("%c", copy[b]);
		}
	}
}


