#include <stdio.h>
#include <conio.h>

int main(){
	int satir;
	printf("satir sayisi girin :");
	scanf("%d", &satir);
	if(satir%2==0){
		satir++;
	}
	
	int bosluk=satir/2;
	int yildiz=1;
	for(int i=0; i<satir;i++){
		for(int j=0;j<bosluk;j++){
			printf(" ");
		}
		for(int j=0;j<yildiz;j++){
			printf("*");
		}
		if(i<satir/2){
		bosluk--;
		yildiz+=2;
	
		}
		else{
			bosluk++;
			yildiz-=2;
		}
		printf("\n");
	}
	
	return 0;
}

