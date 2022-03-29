//Progam Palindrom dan bukan Palindrom
#include <stdio.h>
#include <conio.h>
#include <string.h>

void push(char);
char pop();

char a[100];
int b=-1;

int main()
{
    char c[250];
    int i,x;
	int h=0;

    printf(" Masukan Kalimat : ");
    scanf("%s", c);

    x=strlen(c);

    for(i=0;i<x;i++)
    {
        push(c[i]);
    }

    for(i=0;i<x;i++)
    {
        if(c[i]==pop())
		{
			h++;
		}
    }
    
    if (h==x)
        printf("\n Kalimat %s ini adalah kalimat palindrom", c);
    else
        printf("\n Kalimat %s ini adalah bukan kalimat palindrom", c);
        getch();
}

void push(char d)
{
    a[++b]=d;
}

char pop()
{
    return(a[b--]);
}
