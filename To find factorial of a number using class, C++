#include<iostream.h>
#include<conio.h>
//int num;
class value
{
	long fact;
	public:
	int num;
	void getdata();
	long factorial(int );
	void display();
};
void value::getdata()
{
	cout<<"\n enter value ";
	cin>>num;
}
long value::factorial(int n )
{
	if(n<=1)
	{
		fact=1;
		return fact;
	}
	else
	fact=n*factorial(n-1);
	return fact;
}
void value::display()
{
	cout<<"\n "<<num<<"!="<<fact;
}
void main()
{
	clrscr();
	value s1,s2,s3;
	s1.getdata();
	s1.factorial(s1.num);
	s1.display();
	s2.getdata();
	s2.factorial(s2.num);
	s2.display();
	s3.getdata();
	s3.factorial(s3.num);
	s3.display();
	getch();
}

