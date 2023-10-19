#include<iostream.h>
#include<conio.h>
class value
{
	int i,num;
	long fact;
	public:
	void getdata();
	void calculate();
};
void value::getdata()
{
	cout<<"\n enter the value ";
	cin>>num;
}
void value::calculate()
{
	fact=1;
	for(i=1;i<=num;i++)
	{
	fact=fact*i;
	}
	cout<<"\n "<<num<<"!= "<<fact;
}
void main()
{         clrscr();
	  value s1,s2;
	  s1.getdata();
	  s1.calculate();
	  s2.getdata();
	  s2.calculate();
	  getch();
}
