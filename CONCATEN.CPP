#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{       clrscr();
	char name1[30],name2[30],str[30];
	char* ptr;
	int i,j;
	cout<<"enter first string ";
	cin>>name1;
	cout<<"enter second string ";
	cin>>name2;
	ptr=str;
	i=strlen(name1);
	j=0;
	while(i!=0)
	{
		*ptr=name1[j];
		ptr++;
		j++;
		i--;
	}
	i=strlen(name2);
	j=0;
	while(i!=0)
	{
		*ptr=name2[j];
		ptr++;
		j++;
		i--;
	}
	*ptr='\0';
	cout<<"\nthe concatenated word is "<<str;
	getch();
}

