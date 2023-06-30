#include <stdio.h>
#include <conio.h>
#include <locale.h>

int toplam(int n)
{
	if(n==1)
		return 1;
	else
		return n+toplam(n-1);
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	printf("bir sayi girin :");
	scanf("%d", &sayi);
	if(sayi<=0){
	printf("\nlütfen sýfýrdan büyük bir deðer girin !\a");
	}
	printf("girilen sayýya kadar olan pozitif sayýlarýn toplamý = %d", toplam(sayi));
	
	getch();
	return 0;
}
