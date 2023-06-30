#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int satir, sutun, sutun2, i, j, k, toplam=0;
	printf("A matrisinin satýr sayýsý :"); scanf("%d", &satir);
	printf("A matrisinin sütun sayýsý :"); scanf("%d", &sutun);
	printf("B matrisinin sütun sayýsý :"); scanf("%d", &sutun2);
	
	int A[satir][sutun];
	int B[sutun][sutun2];
	int C[satir][sutun2];
	
	
	printf("A matrisini gir :\n");
	for( i=0;i<satir;i++){
		for( j=0;j<sutun;j++){
	    	printf("%d x %d :\t", i+1, j+1);			
				scanf("%d", &A[i][j]);
	    }
	}
	printf("\n");
	
	printf("B matrisini gir :\n");	
		for( i=0;i<sutun;i++){
			for( j=0;j<sutun2;j++){
		
			printf("%d x %d :\t", i+1, j+1);	
			scanf("%d\n", &B[i][j]);
	    }
	}
	
		for(i=0;i<satir;i++){
			for(j=0;j<sutun2;j++){
				for(k=0;k<sutun;k++){
				toplam+=A[i][k]*B[k][j];
				}
			C[i][j]=toplam;
			toplam=0;
	 		printf("%d\n", C[i][j]);
	    }
	printf("\n");
	}
	printf("\n");
	getch();
	return 0;
}
