/* asal sayi olup olmadigini kontrol etme*/
#include<stdio.h>
#include<math.h>

int sayiasalmi(int sayi);

int main()
{
int sayi;

printf("Bir sayi giriniz:");
scanf("%d",&sayi);

if(sayiasalmi(sayi))
{
	printf("%d bir asal sayi\n",sayi);
}
else
{
	printf("%d bir asal sayi degil\n",sayi);
}
return 0;
}
/* asal sayi olup olamdigini kontrol eeden fonk*/
 int sayiasalmi(int sayi)
 {
 	int i;
 	for (i=1;i<2;i++)
 	{
 		if(sayi%i==0)
 		{
 			return 0;
		 }
	 }
	 return 1;
 }
