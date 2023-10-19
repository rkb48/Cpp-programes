#include<iostream.h>
#include<conio.h>
class smallest
{
	int a;
	public:
	void getdata();
	friend int operator<(smallest,smallest);
};
void smallest::getdata()
{
	cin>>a;
}
int operator<(smallest s1,smallest s2)
{
	int temp;
	temp=(s1.a<s2.a) ;
	return temp;
}
void main()
{
	clrscr();
	int t;
	smallest s1,s2;
	cout<<"\n enter the value of object1 ";
	s1.getdata();
	cout<<"\n enter the value of object2 ";
	s2.getdata();
	t=operator<(s1,s2);
	if(t==1)
		cout<<"\n object1 is smaller";
	else
		cout<<"\n object2 is smaller";
	getch();
}
