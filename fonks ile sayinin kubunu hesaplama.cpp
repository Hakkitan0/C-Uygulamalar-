#include<stdio.h>
/* fonks beyan*/
int sayininkubunuhesaplama(int sayi);

int main ()
{
	int sayi, c;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	c=sayininkubunuhesaplama(sayi);
	
	printf("%d sayinin kubu=%d",sayi,c);
	return 0 ;
}
	int sayininkubunuhesaplama(int sayi)
	{
		
		return (sayi*sayi*sayi);
	}
