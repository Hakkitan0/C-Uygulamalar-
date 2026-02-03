#include<stdio.h>
#include<conio.h>
int main()
{
		int a[2][2],b[2][2],toplam[2][2],i,j;
		printf("1. Matrisin elemanini giriniz:\n");
	for (i=0 ; i<2 ; i++)
		for(j=0 ; j<2 ; j++)
		{
			printf("a dizisinin [%d %d] elemanina deger girin:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		printf("2. Matrisin elemanlarini giriniz:\n");
		for (i=0 ; i<2 ; ++i)
		{
			for(j=0 ; j<2 ; ++j)
			{
				printf("b dizinin [%d %d] elemanina deger girin:",i+1,j+1);
				scanf("%d",&b[i][j]);
			}			
		}

			for (i=0 ; i<2 ; i++)
			{
				for(j=0 ; j<2 ; j++)
				{
					toplam[i][j]=a[i][j]+b[i][j];
					printf("toplam sonucu:");
				
					printf("%d\n",toplam[i][j]);
									
				}				
			}
	
				getch(); return 0;

}
