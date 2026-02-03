#include<stdio.h>
#include<stdlib.h>

int kelimeSay(char*dosyaYolu)
{
	FILE *dosya=fopen(dosyaYolu,"r");
	if (dosya==NULL)
	{
		printf("Dosya acilmadi \n");
		return -1;
	}	
	char kelime[100];
	int sayac=0;
	while(fscanf(dosya,"%s",kelime)==1)
	{
		sayac++;
	}
	fclose(dosya);
	return sayac;
}
int main()
{
	int sonuc=kelimeSay("metin.txt");
	if (sonuc!=-1)
	{
		printf("Dosyadaki toplam kelime sayisi:%d\n",sonuc);
	}
	else{
		printf("Dosya bulunamadi\n");
	}
	return 0;
}

