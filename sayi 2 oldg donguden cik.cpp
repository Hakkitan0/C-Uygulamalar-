#include <stdio.h>
int main (){
	int i;
	
	for ( i=0; i<5; i++)
	{
		if(i == 2)
		break;
		printf("i=%d\n",i);
		
	}
	printf("i degeri %d iken donguden cikildi",i);
	return 0;
}
