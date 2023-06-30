#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int matris[5][5];
	int toplam=0;
	srand(time(NULL));
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matris[i][j]=rand()%10;
			printf(" %d ", matris[i][j]);
			if(i==j)
			toplam+=matris[i][j];
		}
	    printf("\n");
	}
	printf("Diyagonal toplami =%d", toplam);
	getch();
	
	
	
}
