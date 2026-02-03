#include<stdio.h>
#include<conio.h>
#define OGR 5
int main()
{
	float matematik [OGR][4]={
						{40,60,60},
						{50,80,85},
						{70,50,80,0},
						{90,70,70,0},
						{80,50,90},
						};
	float turkce [OGR][4]={
						{10,50,100,0},
						{40,80,50},
						{50,30,30,0},
						{80,70,0,0},
						{90,95},
						};
	int i,j;
	j =0;
	for (i=0; i<OGR; i++)
	{
		matematik[i][j+3]=(matematik[i][j]+ matematik[i][j+1]+matematik[i][j+2])/3;
	}
	printf("matematik dersi notlari\n");
	printf("1.Asinav 2.Asinav  final donem sonu\n");
	printf("*********************\n");
	for( i=0;i<OGR;i++)
	{
		for(j=0; j<4;j++)
		{
			printf("%8.2f",matematik[i][j]);
		}
		printf("\n");
	}
	j =0;
	for(i=0; i<OGR; i++)
	{
		turkce[i][j+3]=(turkce[i][j]+turkce[i][j+1]+turkce[i][j+3])/3;
	}
	printf("turkce dersi notlari\n");
	printf("1.Asinav 2.Asinav final donem sonu\n");
	printf("*******************************\n");
	for(i=0;i<OGR;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%8.2f",turkce[i][j]);
		}
		printf("\n");
	}
	getch(); return 0;
	}


