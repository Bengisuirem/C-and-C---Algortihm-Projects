#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int satir, sutun, stn2, toplam=0;
	int i, k, j;
	
	printf("1.matrisin satýr sayýsý :"); scanf("%d", &satir);
	printf("1.matrisin sütun sayýsý :"); scanf("%d", &sutun);
	printf("2.matrisin sütun sayýsý :"); scanf("%d", &stn2);
	
	int matris1[satir][sutun], matris2[sutun][stn2], matris3[satir][stn2];
		for(i=0;i<satir;i++){
			for(j=0;j<sutun;j++){
				printf("%d x %d :", i+1, j+1); scanf("%d", &matris1[i][j]);
			}
		}
	printf("\n");
	
		for(i=0;i<sutun;i++){
			for(j=0;j<stn2;j++){
				printf("%d x %d :", i+1, j+1); scanf("%d", &matris2[i][j]);
			}
		}
	
		for(i=0;i<satir;i++){
			for(j=0;j<stn2;j++){
				for(k=0;k<sutun;k++){
					toplam+=matris1[i][k]*matris2[k][j];
				}
				matris3[i][j]=toplam;
				toplam=0;
				printf("%d  ", matris3[i][j]);
			}
			printf("\n");
		}
printf("\n");
getch();	
return 0;
}
