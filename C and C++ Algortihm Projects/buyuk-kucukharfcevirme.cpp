#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	char cumle[100];
	int i;
	printf("bir cumle girin :");
	gets(cumle);
	
	while(cumle[i]!='\0'){
		if(64<cumle[i] && cumle[i]<91)
		cumle[i]+=32;
		else if(96<cumle[i] && cumle[i]<123){
			cumle[i]-=32;
		}
	    i++;
	}
	puts(cumle);
	getch();
	return 0;
}
