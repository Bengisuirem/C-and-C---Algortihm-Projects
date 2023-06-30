#include <stdio.h>
#include <conio.h>

int sol(unsigned char a, unsigned b)
{
	unsigned x=128;
	unsigned y=1;
	unsigned z;
	
	for(int i=0; i<b ; i++){
		z= a | x;
		if(a==z){
			a=a<<1;
			a = a | y;
		}
		else{
			a=a<<1;
		}
	}
		return a;
}

int main()
{
	unsigned char sayi1;
	unsigned sayi2;
	printf("255'ten kucuk bir sayi girin :");
	scanf("%u", &sayi1);
	printf("sola ne kadar kaydirmak istediginizi yazin :");
	scanf("%u", &sayi2);
	printf("%u", sol(sayi1,sayi2));
	
	getch();
	return 0;
}
