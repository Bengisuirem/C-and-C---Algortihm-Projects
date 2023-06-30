#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int i,j,k, matris[3][3];
	srand(time(NULL));
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				
				
				matris[i][j]=rand()%100;
				printf("%d ", matris[i][j]);
			}
		printf("\n");
		}
		int kntrl, toplam=0;
		kntrl=0;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				
				
				
				for(k=2;k<matris[i][j];k++){
					if((matris[i][j]%k)==0) {
					kntrl=1;
					break;
				    }
					if(kntrl==0 && matris[i][j]!=1)
					toplam+=matris[i][j];
					
				}
			
			}
		
		}
		printf("matrisin asal elemanlarýnýn toplamý  :%d", toplam);
		getch();
		return 0;
}
