#include <stdio.h>
#include <conio.h>

int solakaydir(unsigned char x,unsigned y){
	
	unsigned a=128;
	unsigned b=1;
	unsigned z;
	
	for(int i=0; i<y; i++){
		z = x | a;
		if(x==z){
			x=x<<1;
			x=x|b;
		}
		else{
			x=x << 1;
		}
	}
		return x;
}

int main(){

	unsigned char sayi;
	unsigned sayi2;
	
	
	
	printf("Sayi giriniz (En fazla 255 e kadar girebilirsiniz) :");
	scanf("%d",&sayi);
	printf("sola kac kaydirmak istersiniz :");
	scanf("%d",&sayi2);
	printf("%d",solakaydir(sayi,sayi2));	
	
	getch();
	return 0;
}
