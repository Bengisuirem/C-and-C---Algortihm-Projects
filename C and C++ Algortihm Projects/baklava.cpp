#include <stdio.h>
#include <conio.h>

int main(){
	int satir=5;
	int bosluk=2;
	int yildiz=1;
	for(int i=0; i<satir;i++){
		for(int j=0;j<bosluk;j++){
			printf(" ");
		}
		for(int j=0;j<yildiz;j++){
			printf("*");
		}
		printf("\n");
		if(i<2){
		bosluk--;
		yildiz+=2;
	
		}
		else{
			bosluk++;
			yildiz-=2;
		}
	}
	
	return 0;
}
