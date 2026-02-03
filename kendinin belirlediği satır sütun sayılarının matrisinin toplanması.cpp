#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,a[100][100],b[100][100],toplam[100][100],i,j;
	printf("Satir sayisi giriniz:");
	scanf("%d",&r);
	
	printf("Sutun sayisini giriniz:");
	scanf("%d",&c);
	
	printf("1. Matrisin elemanini giriniz:\n");
	for (i=0 ; i<r ; ++i)
		for(j=0 ; j<c ; ++j)
		{
			printf("a dizisinin [%d %d] elemanina deger girin:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		printf("2. Matrisin elemanlarini giriniz:\n");
		for (i=0 ; i<r ; ++i)
			for(j=0 ; j<c ; ++j)
			{
				printf("b dizinin [%d %d] elemanina deger girin:",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
			for (i=0 ; i<r ; ++i)
				for(j=0 ; j<c ; ++j)
					toplam[i][j]=a[i][j]+b[i][j];
					printf("toplam sonucu:\n");
				for(i=0;i<c;++j)
				{
					printf("%d",toplam[i][j]);
						if(j==c-1)
							printf("\n");
				}
				getch(); return 0;
}
