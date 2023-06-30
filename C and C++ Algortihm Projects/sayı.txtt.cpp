#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	
	FILE *dosya;
	
	dosya= fopen ("sayilar.txt", "w");
	int dizi[100];
	srand(time(NULL));
	for(int i=0;i<=1000;i++){
		dizi[i]=rand()%1000;
	fprintf(dosya, "%d\n", dizi[i] );
	if(dosya==NULL){
		printf("dosya acma hatasi !");
		getch();
		return 0;
	}
	}
	fclose(dosya);
}
