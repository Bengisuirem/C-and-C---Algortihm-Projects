#include <stdio.h>
#include <conio.h>
int main()
{
	int t, i=1, snc;
	printf("bir sayi gir\n");
	scanf("%d", &t);
	while(t>=i)
	{
		snc=snc*i;i++;
		printf("%d", snc);
	}
	return 0;
}
