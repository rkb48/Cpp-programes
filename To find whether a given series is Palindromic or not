#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{       clrscr();

	int i,j,k;
	char name[30],str[30];
	char* ptr;
	cout<<"enter the word  ";
	cin>>name;
	ptr=name;
	i=strlen(name);
	while(i!=0)
	{
	str[i-1]=*ptr;
	ptr=ptr+1;
	i--;
	}
	j=strlen(name);
	str[j]='\0';
	cout<<name<<"\n";
	cout<<str<<"\n";
	k=strcmp(name,str);
	if(k==0)
	cout<<"the word is a pallindrome \n";
	else
	cout<<"the word is not a pallindrom";
	getch();
}
