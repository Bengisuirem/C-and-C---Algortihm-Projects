#include <stdio.h>
#include <conio.h>

int toplam(int n){

	if(n==1)
		return 1;
		
	else
		return n+toplam(n-1);
	
}

int main(){
	int a;
	printf("bir sayi girin :");
	scanf("%d", &a);
	
	if(a<=0){
	printf("lutfen sifirdan buyuk bir sayi girin !\a");
	}
	
	printf("toplam sonucu = %d", toplam(a));
	getch();
	return 0;
}
