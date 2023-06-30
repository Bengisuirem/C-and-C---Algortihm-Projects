#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	FILE *dsy;
	FILE *dsy2;
	dsy=fopen("yey2.txt", "w");
	if(dsy==NULL){
		printf("dosya acma hatasi ");
		getch();
		return 0;
	}
	dsy2=fopen("yey.txt", "r");
	if(dsy2==NULL){
		printf("dosya acma hatasi ");
		getch();
		return 0;
	}
	int sayi=0, kntrl=0;
	for(int i=0;i<=100;i++){
		kntrl=0;
		fscanf(dsy2, "%d\n", &sayi);
		for(int j=2; j<sayi;j++){
			if(sayi%j==0 || sayi==1 || sayi==0){
				kntrl++;
			}
		}
		if(kntrl==0)
			fprintf(dsy, "%d\n", sayi);
		
	}
	fclose(dsy);
	fclose(dsy2);
	return 0;
	
}





