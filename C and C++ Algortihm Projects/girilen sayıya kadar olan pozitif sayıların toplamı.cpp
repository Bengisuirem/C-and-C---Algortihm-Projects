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
	printf("\nl�tfen s�f�rdan b�y�k bir de�er girin !\a");
	}
	printf("girilen say�ya kadar olan pozitif say�lar�n toplam� = %d", toplam(sayi));
	
	getch();
	return 0;
}
