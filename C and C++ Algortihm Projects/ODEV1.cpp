#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a;
	srand(time(NULL));
	FILE *dosya;
		dosya = fopen("helo.txt", "w");
		if(dosya=NULL){
			printf("dosya acilma hatasi");
		
		getch();
		return 0;
    	}
    	
		for(int i=0; i<=100; i++){
			a = rand()%1000;
			fprintf(dosya, "%d\n", a);
		}
		fclose(dosya);
		
		return 0;
	

}

