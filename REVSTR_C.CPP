#include<iostream.h>
#include<conio.h>
class rev_str
{       public:
	char name[20];
	char* ptr;
	void getdata();
	void reverse(char*);
};
void rev_str::getdata()
{
	cout<<" enter the word ";
	cin>>name;
	ptr=name;
}
void rev_str::reverse(char* s)
{
	if(*s!='\0')
	reverse(s+1);
	cout<<*s;


}
void main()
{
	clrscr();
	rev_str s1;
	s1.getdata();
	s1.reverse(s1.name);
	getch();
}