#include<stdio.h>
#include <locale.h>
int main ()
{
	int i;
	for(i=1;i<100;i++)
	{
		if((i%2==0) && (i%3==0) && (i%4==0) && (i%5) )
		{
			printf(" 2, 3, 4 ve 5 sayýlarýna kalansýz bölünebilen en küçük iki basamaklý sayý :%d", i);
			break;
		}
	}
	getch();
	return 0;
}
