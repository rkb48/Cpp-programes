
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{       clrscr();
	char name[30];
	char* ptr;
	int i,j;
	cout<<"enter the word  ";
	cin>>name;
	ptr=name;
	j=0;
	i=strlen(name);

	while(i!=0)
	{
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||
		  *ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
		j=j+1;
		ptr=ptr+1;
		i--;
	}
	cout<<"the numbers of vowel= "<<j;
	getch();
}
