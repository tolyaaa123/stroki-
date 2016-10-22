#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char str[10],dd[10];
	scanf("%s %s",&str,&dd);
	strcat(str,dd);
	cout<<str;
	system("pause");
}