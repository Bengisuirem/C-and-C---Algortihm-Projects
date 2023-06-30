#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	int sayi, snc=0;
	cout<<"sayiyi girin  : ";
	cin>>sayi;
	cout<<endl;
	
	for(int i=0;i<=sayi;i--)
	{snc*=i;}
	cout<<"girilen sayiya kadar olan toplam = "<<snc<<endl;
	getch();
}

