#include<iostream.h>
#include<conio.h>
class fibonacci
{
	int n1,n2,num,sum,i;
	public:
	void getdata();
	void series();
};
void fibonacci::getdata()
{
	cout<<" enter number of terms ";
	cin>>num;
}
void fibonacci::series()
{
	cout<<0<<"\t";
	cout<<1<<"\t";
	n1=0;n2=1;
	for(i=2;i<num;i++)
	{
	      sum=n1+n2;
	      cout<<sum<<"\t";
	      n1=n2;
	      n2=sum;
	}
}
void main()
{       clrscr();
	fibonacci s1;
	s1.getdata();
	s1.series();
	getch();
}

