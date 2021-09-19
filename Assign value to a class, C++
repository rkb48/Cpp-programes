#include<iostream.h>
#include<conio.h>
class assign
{
	int a;
	public:
	void getdata();
	void operator=(assign);
};
void assign::getdata()
{
	cout<<"\n enter the value of object1 ";
	cin>>a;
}
void assign::operator=(assign s)
{
	a=s.a;
	cout<<"\n value assigned to object1 is "<<s.a;
	cout<<"\n value assigned to object2 is "<<a;
}
void main()
{
	clrscr();
	assign s1,s2;
	s1.getdata();
	s2=s1;
	getch();
}
