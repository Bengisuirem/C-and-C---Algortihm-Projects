#include <stdio.h>
#include <conio.h>
int main()
{
	char cumle[100];
	int i=0, sayac=0;
	printf("bir cumle girin :");
	gets(cumle);
	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i]==32){
			sayac++;
		}
	}
	printf("cumledeki kelime sayisi : %d", sayac+1);
	getch();
	return 0;
}
