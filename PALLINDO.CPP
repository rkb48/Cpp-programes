#include<iostream.h>
#include<conio.h>
#include<string.h>
class palindrome
{
	char name[20];
	char str[20];
	char* ptr ;
	int i,j,k;
	public:
	void getdata();
	void reverse();
	void check();
};
void palindrome::getdata()
{
	cout<<"\n enter the word ";
	cin>>name;
	ptr=name;
}
void palindrome::reverse()
{
	i=strlen(name);
	while(i!=0)
	{
		str[i-1]=*ptr;
		i--;
		ptr++;
	}
	k=strlen(name);
	str[k]='\0';


}
void palindrome:: check()
{
	j=strcmp(name,str);
	cout<<"\n"<< str;
	if(j==0)
	cout<<"\n"<< "the word is palindrome";
	else
	cout<<"\n"<< "the word is not palindrome";
}

void main()
{       clrscr();
	palindrome s1,s2;
	s1.getdata();
	s2.getdata();
	s1.reverse();
	s2.reverse();
	s1.check();
	s2.check();
	getch();

}
