#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int level,i,k,l;
	int arr[30],temp[30];
	cout<<"\n enter the level";
	cin>>level;
	temp[0]=1;
	arr[0]=1;
	cout<<1<<"\n";
	for(i=1;i<level;i++)
	{
	for(k=1;k<i;k++)
	{
	 arr[k]=temp[k-1] +temp[k];
	}
	arr[i]=1;
	for(l=0;l<=i;l++)
	{
	 cout<<arr[l]<<"\t";
	 temp[l]=arr[l];
	}
	 cout<<"\n";
	}
	getch();
}



