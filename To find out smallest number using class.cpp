#include<iostream.h>
#include<conio.h>
class smallest
{
	int a;
	public:
	void getdata();
	void operator<(smallest);
};
void smallest::getdata()
{
	cin>>a;
}
void smallest::operator <(smallest s)
{
	if(a<s.a)
	cout<<"\n object1 is smaller";
	else if(a>s.a)
	cout<<"\n object2 is smaller";
	else
	cout<<"\n objects are equal";
}
void main()
{
	clrscr();
	smallest s1,s2;
	cout<<"\n enter the value of object1 ";
	s1.getdata();
	cout<<"\n enter the value of object2 ";
	s2.getdata();
	s1<s2;
	getch();
}
