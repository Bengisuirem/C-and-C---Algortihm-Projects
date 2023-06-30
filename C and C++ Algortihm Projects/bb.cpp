#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int i,j,k,a,b,kntrl=0, toplam=0;
	int  matris[a][b];
	srand(time(NULL));
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				
				matris[a][b]=rand()%100;
				kntrl=0;
				for(k=2;k<matris[a][b];k++){
					if((matris[a][b]%k)==0) {
					kntrl=1;
					break;
				    }	
				}
			}
		}
				if(kntrl==0){
					printf("%d", matris[a][b]);
					toplam=toplam+matris[a][b];
				}
		}
		printf("asal sayýlarýn toplamý =%d", toplam);
		getch();
		return 0;
}
