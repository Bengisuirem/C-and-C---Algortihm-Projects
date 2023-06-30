#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *dosya;
	int id1;
	dosya= fopen ("sayilar.txt", "w");
	fprintf(dosya, "biir seeyleeeeer..",id1);
	if(dosya==NULL){
		printf("dosya acma hatasi !");
		getch();
		return 0;
	}
	fclose(dosya);
}
