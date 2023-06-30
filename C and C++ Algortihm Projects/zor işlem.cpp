#include <iostream>
#include <conio.h>
int main()
{
using namespace std;
	setlocale (LC_ALL, "Turkish");
	int a, b, islem;
	cout<<"birinci sayýyý girin  :";
	cin>>a;
	cout<<endl;
	cout<<"ikinci sayýyý girin  :";
	cin>>b;
	cout<<endl;
	islem=4*a/(b^2)^(1/3);
	cout<<"iþlemin cevabý  = "<<islem<<endl;
	getch();
	
}
