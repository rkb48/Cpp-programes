#include<iostream.h>
#include<conio.h>
void main()
{       clrscr();
	int year;
	cout<<"\n enter the year";
	cin>>year;
	if(year%400==0)
	cout<<"\n the entered year is not a Leap Year";
	else if(year%100==0)
	cout<<"\n the entered year is not a Leap Year";
	else if(year%4==0)
	cout<<"\n the entered year is a Leap Year";
	else
	cout<<"\n the entered year is not a Leap Year";
	getch();
}
