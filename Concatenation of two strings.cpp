#include<iostream.h>
#include<conio.h>
#include<string.h>
class X
{
	protected:
	char str1[20];
	public:
	X(char x[20])
	{
	int len1=strlen(x);
	for(int k=0;k<len1;k++)
		str1[k]=x[k];
	str1[len1]='\0';
	}
};
class Y
{
	protected:
	char str2[20];
	public:
	Y(char y[20])
	{
	int len2=strlen(y);
	for(int k=0;k<len2;k++)
		str2[k]=y[k];
	str2[len2]='\0';
	}
};
class Z:public X,public Y
{
	char str3[20];
	public:
	Z(char a[20],char b[10],char c[20]):X(a),Y(b)
	{
	for(int i=0;i<10;i++)
		str3[i]=c[i];
	}
	void concatenate()
	{
	strcat(str1,str2);
	int len=strlen(str1);
	for(int j=0;j<len;j++)
		str3[j]=str1[j];
	str3[len]='\0';
	cout<<"\n the concatenated string is:"<<str3;

	}

	void display()
	{
	cout<<"\n the 1st string is:"<<str1;
	cout<<"\n the 2nd string is:"<<str2;
	}
};
void main()
{
	clrscr();
	Z z("Rahul","Sharma"," ");
	z.display();
	z.concatenate();
	getch();
}
