#include <stdio.h>
void NumYaz(int nu)
{
	printf("Numarasini:%d",nu);
}
float Ort(int x,int y)
{
	return (x*0.4)+(y*0.6);
}
void DurumYaz(float x)
{
	if(x>=50)
	{
		printf("\nGecti,Notunuz:%1.2f",x);
	}
	else
	{
		printf("\nKaldi,Notunuz:%1.2f",x);
	}
}

int main()
{
	int numara,vize,final;
	float ortalama;
	
	printf("Ogrenci numarasini giriniz:");
	scanf("%d",&numara);
	
	printf("Vize ve final notunu giriniz :");
	scanf("%d %d",&vize,&final);
	NumYaz(numara);
	ortalama=Ort(vize,final);
	DurumYaz(ortalama);
	return 0;
}
