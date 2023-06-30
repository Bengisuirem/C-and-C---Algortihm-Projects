#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int i,j,k,x,y;
	int  matris[x][y];
	int kntrl=0, toplam=0;
	srand(time(NULL));
	
		for(i=2;i<12;i++){
			for(j=2;j<12;j++){
				
				matris[x][y]=rand()%100;
				kntrl=0;
				for(k=2;k<matris[x][y];k++){
					if(matris[x][y]%k==0) {
					kntrl=1;
					break;
				    }	
				}
			}
		
					if(kntrl==0){
					printf("%d  ", matris[x][y]);
					toplam=toplam+matris[x][y];
					}
		}
		
		printf("Matristeki asal elemanlarýn toplamý =%d\t", toplam);
		getch();
		return 0;
}
