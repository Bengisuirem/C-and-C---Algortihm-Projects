#include <stdio.h>
#include <conio.h>
int main()
{
	unsigned char a;
	unsigned b;
	printf("255'ten kucuk bir sayi girin :");
	scanf("%u", &a);
	printf("sola ne kadar kaydirmak istediginizi yazin :");
	scanf("%u", &b);
	
	unsigned c=128;
	unsigned d=1;
	
	unsigned x;
	for(int i=0; i<b;i++){
		
		x = a | c;
		if(a==x){
			a=a<<1;
			a= a| d;
		}
		else{
			a= a<<1;
		}
	}
	printf("sayi : %d", x );
	getch();
	return 0;
}
