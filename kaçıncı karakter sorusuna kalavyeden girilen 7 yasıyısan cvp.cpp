#include<stdio.h>
#include<conio.h>

int main(void)
{
	int i;
	char karakter []="Bu bir deneme cumlesidir";
	
	printf("kacinci karakter ?:");
	scanf("%d",&i);
	
	if(karakter [i-1]==' ')
	printf("bu karakter bosluktur");
	else
	printf("%c",karakter[i-1]);
	getch();
	return 0;
}
