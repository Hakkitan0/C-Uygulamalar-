//klavyeden girilen 3 sayinin carpimi
#include<stdio.h>

int main()
{
	int sayi1,sayi2,sayi3,carpim;
	
	printf("birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	printf("ucuncu sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	carpim=sayi1*sayi2*sayi3;
	
	printf("carpim islemi sonucu =%d",carpim);
}
