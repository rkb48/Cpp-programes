#include<iostream.h>
#include<conio.h>
class temperature
{
	float temp;
	float farenht;
	public:
	void calculate();
};
void temperature::calculate()
{
	cout<<"\n enter the temperature value";
	cin>>temp;
	farenht=((9*temp)/5)+32;
	cout<<"\n"<<farenht;
}
void main()
{
	clrscr();
	temperature s1,s2;
	s1.calculate();
	s2.calculate();
	getch();
}



