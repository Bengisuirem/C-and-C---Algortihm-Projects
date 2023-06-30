#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a;
	srand(time(NULL));
	FILE *dsy;
		dsy=fopen("sayilar.txt", "w");
		if(dsy==NULL){
			printf("dosya acma hatasi");
			getch();
			return 0;
		}
		
		for(int i=0; i<=100; i++){
			a=rand()%1000;
			fprintf(dsy, "%d\n", a);
		}
		fclose(dsy);
		return 0;
}
