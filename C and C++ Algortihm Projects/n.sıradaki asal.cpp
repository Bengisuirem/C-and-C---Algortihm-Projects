#include <stdio.h>
#include <conio.h>

int asalmi(int sayi, int n){
	int x=0;
	int asal[1000];
	int kontrol=0;
	for(int i=2;i<=sayi;i++){
		kontrol=0;
		for(int j=2;j<=i-1;j++)
		{
			if((i%j)==0)
		kontrol=1;	
		}
		if(kontrol==0){	
		asal[x]=i;	
		printf("%d\n",i);
		x++;
		}	
	}
	for(i=0; i<x; i++){
		if(i==n)
	return printf(" %d. siradaki asal sayi : %d\n",i, asal[n]);
	}
}
int main(){
	int v, sira;
	printf("bir sira girin :");
	scanf("%d", v);
	printf("kacinci siradaki sayi :");
	scanf("%d", &sira);
	asalmi(v,sira);
	
	getch();
}






