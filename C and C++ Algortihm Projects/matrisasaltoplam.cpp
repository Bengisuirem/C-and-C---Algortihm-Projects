#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int i,j,k, A, matris[10][10];
	srand(time(NULL));
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				
				A=rand()%10;
				matris[i][j]=A;
				printf("%d ", matris[i][j]);
			}
		printf("\n");
		}
		int kntrl, toplam=0, b;
		
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				
				kntrl=0;
				b=matris[i][j];
				for(k=2;k<b;k++){
					if((b%k)==0 && b!=1) {
						toplam+=b;
					}
					
				}
			}
		}
		printf("matrisin asal elemanlarýnýn toplamý  :%d", toplam);
		getch();
		
}
