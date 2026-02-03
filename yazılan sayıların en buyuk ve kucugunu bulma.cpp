#include<stdio.h>
#include<conio.h>
 int main(void)
 {
 	int dizi[5];
 	for(int i=0;i<5;i++)
 	{
 		printf("%d sayiyi gir:", i+1);
 		scanf("%d",&dizi[i]);
	 }
	 int enbuyuk=dizi[0];
	 int enkucuk=dizi[0];
	 for(int j=1;j<5;j++)
	 {
	 	if(dizi[j]>enbuyuk)
	 	enbuyuk=dizi[j];
	 	if(dizi[j]<enkucuk)
	 	enkucuk=dizi[j];
	 }
	 printf("En Buyuk Deger:%d\n En Kucuk Deger:%d",enbuyuk,enkucuk);
 }
