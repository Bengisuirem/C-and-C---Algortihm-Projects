#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char cumle[100];
	char kelime[20];
	char *ptr;
	printf("bir cumle girin :");
	gets(cumle);
	printf("bir kelime yazin  :");
	scanf("%s", kelime);
	
	ptr= (cumle, kelime);
	if(ptr=='\0'){
		printf("eslesme bulunamadý.");
	}
	else {
	
	printf("baslangýc degeri %d.karakter", (ptr - cumle)+1);
    }
          
          
	getch();
	return 0;
}
