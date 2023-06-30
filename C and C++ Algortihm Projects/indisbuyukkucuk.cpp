#include <stdio.h>
#include <conio.h>

int main(){
	int fark, i;
	char metin[200];
	printf("bir metin girin :");
	gets(metin);
	fark='a'-'A';
	for(i=0; metin[i]!='\0';i++){
		if(i%2==1){
			if(metin[i]>='a' && metin[i]<='z'){
			metin[i]-=fark;
			
		}
		else{
			if(metin[i]>='A' && metin[i]<='Z'){
			metin[i]+=fark;
			}
		
		}
	
		}
	printf("%c", metin[i]);
	}
	
	getch();
	return 0;
	
}
