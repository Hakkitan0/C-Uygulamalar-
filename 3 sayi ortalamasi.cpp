#include<stdio.h>

int main()
{
	int sayi1,sayi2,sayi3,toplam,ortalama;
	
	printf("birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	printf("ucuncu sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	toplam=sayi1+sayi2+sayi3;
	
	ortalama=toplam/3;
	
	printf("ortalama islemi sonucu =%d",ortalama);
	
	
	
}
