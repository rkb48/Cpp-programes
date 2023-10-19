#include<iostream.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
class data
{
	int radius;
	float area;
	float circum;
	public:
	void calculate();
};
void data::calculate()
{
	cout<<"\n enter radius value ";
	cin>>radius;
	area=pi*pow(radius,2);
	circum=2*pi*radius;
	cout<<"\n area="<<area;
	cout<<"\n circumference="<<circum;
}
void main()
{
	clrscr();
	data s1,s2,s3;
	s1.calculate();
	s2.calculate();
	s3.calculate();
	getch();
}
