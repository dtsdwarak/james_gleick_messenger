# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>
struct info
 {
  char fname[20],mname[20],sname[20],username[25],pass1[7],pass2[7],id[2];
 };




void composiatte(char[]);

void main()
{
 clrscr();
 char name[20];
 cout<<"\n\nEnter your username : ";
 gets(name);
 composiatte(name);
 getch();
}
void composiatte(char name[])
{
 clrscr();
int ch,l;
char sub[80],usercheck[10];
comp:cout<<"\t\t\t WELCOME TO JGMSG'S MESSAGE COMPOSIATTE......";
cout<<"\n\n Enter the length of your message ";
cout<<"\n\n 1. Sweet And Crisp (5 Lines)\n 2. Reaching the Mind (10 Lines) \n 3. Blow your own trumpet!!! (15 Lines) ";
cout<<"\n\nEnter your choice : ";
cin>>ch;
(ch==1)?l=5:((ch==2)?l=10:l=20);
cout<<"\n\nyour no. of lines : "<<l;
cout<<"\n PRESS ANY KEY FOR US 2 ESCORT U TO THE REQUIRED PAGE....";
getch();
clrscr();
cout<<"\n\n\n\t\t\tJG MSG OUTLOOK EXPRESS ";
int flag=0;
cout<<flag;
cout<<"\n\nTo : ";
cin.getline(name,8,'@');
cout<<"\n\nuser name : ";puts(name);
ifstream fin12("C:\\JG MSG\\login\\list1.txt");
if (!fin12)
cout<<"list link failure";
else
{
cout<<"\n\nlink successful\n";
while(fin12.getline(usercheck,10))
{
 if (strcmpi(usercheck,name)==0)
 {
  flag=1;
  cout<<"\n\nName found!";
 }
}
}
fin12.close();
}




