#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int faktoriyel(int n){
	
	int i=1,fak=1;
	while(i<=n){
		fak*=i;
		
		i++; 
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
	return 0;
}
