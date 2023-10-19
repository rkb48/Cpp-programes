#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,r,i=1,j,rev;
	int arr[10];
	cout<<"\n enter the number";
	cin>>num;
	while(num!=0)
	{
	r=num%10;
	arr[i]=r;
	num=num/10;
	i=i+1;
	}
	rev=arr[1];

	for(j=2;j<i;j++)
	{
	rev=rev*10;
	rev=rev+arr[j];
	}
	cout<<rev;
	getch();
}
