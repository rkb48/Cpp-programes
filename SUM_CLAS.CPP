#include<iostream.h>
#include<conio.h>
class numbers
{
	long num;
	int sum,r;
	public:
	void  add();
};
void numbers::add()
{
	cout<<"\n enter the number ";
	cin>>num;
	sum=0;
	while(num!=0)
	{
	r=num%10;
	num=num/10;
	sum=sum+r;
	}
	 cout<<"\n sum="<<sum;
}
void main()
{
	clrscr();
	numbers s1,s2;
	s1.add();
	s2.add();
	getch();
}