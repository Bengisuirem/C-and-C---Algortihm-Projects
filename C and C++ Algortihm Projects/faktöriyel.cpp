#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0, faktor=0, n;
	printf("bir sayi girin :");
	scanf("%d", &n);
	faktor=1;
	for(i=1; i<=n; i++)
	faktor*=i;
	printf("%d", faktor);
	return 0;
	
}
