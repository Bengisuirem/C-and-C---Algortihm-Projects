#include <stdio.h>
#include <conio.h>
int main()
{
	int gun;
	printf("bir sayi girin :\n");
	scanf("%d", &gun);
	switch(gun)
	{
		case 1: printf("pazartesi");
		break;
		case 2: printf("sali");
		break;
		case 3: printf("carsamba");
		break;
		case 4: printf("persembe");
		break;
		case 5: printf("cuma");
		break;
		case 6: printf("cumartesi");
		break;
		case 7: printf("pazar");
		break;
		default : printf("hatalý no, lutfen 1 ile 7 arasýnda bir deger girin !");
	}
	
	getch();
}
