#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int faktoriyel(int n){
	
	int i,fak=1;
	for(i=1;i<=n;i++){
		fak*=i;
	}
	return fak;
}

int kmb(int n, int r){
	
	return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
	
}

int main()
{
	int sayi1, sayi2;
	printf("birinci sayiyi girin :");
	scanf("%d", &sayi1);
	printf("ikinci sayiyi girin :");
	scanf("%d", &sayi2);
	
	printf("kombinasyon : %d", kmb(sayi1, sayi2));
	getch();
	return 0;
}
