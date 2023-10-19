#include<iostream.h>
#include<conio.h>
void main()
{       clrscr();
	int num,r,sum;
	cout<<"\n enter the number";
	cin>>num;
	sum=0;
	while(num!=0)
	{
	r=num%10;
	sum=sum+r;
	num=num/10;
	}
	cout<<"\n the required sum is "<<sum;
	getch();
}
