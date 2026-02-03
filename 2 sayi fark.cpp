#include<stdio.h>
int main()
{
	int sayi1,sayi2,sonuc;
	printf("birinci sayi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2)
	if(sayi1>sayi2)
	{
		sonuc=sayi1-sayi2;
		printf("sonuc=%d",sonuc);
	}
	else
	{
		sonuc=sayi2-sayi1;
		printf("sonuc=%d",sonuc);
	}
	
	
	
	
	return 0;
}
