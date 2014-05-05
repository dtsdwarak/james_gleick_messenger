# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>


struct calen
{
 int d,m,y;
};

struct subs
{
 char from[8],subject[80];
 calen cal;
};



struct use
{
 char name[8];
};



struct logid
 {
  char a;
 };

struct info
 {
  char fname[20],mname[20],sname[20],username[25],pass1[7],pass2[7],id[2];
 };











void mailcheck(char[]);
void main()
{
 clrscr();
 char name[8];
 cout<<"\n\nEnter your username : ";
 gets(name);
 mailcheck(name);
 getch();
}


void mailcheck(char uname[])
{

 uname[0]=tolower(uname[0]);
 /*****************reading the file of the person ***************/

char add[]="C:\\JG MSG\\login\\";
strcat(add,uname);
strcat(add,".jgs");


cout<<"\n\nfile access adress of the person's record : ";
puts(add);

/*********reading the user login id from his file***********/
info C;
ifstream fin30(add,ios::binary);
fin30.read((char*)&C,sizeof(C));
fin30.close();

cout<<"\n\nthe persons' record read";
cout<<"\nThe person's name : "<<C.fname;
cout<<"\nThe person's login id : "<<C.id;

/*************process of accessing the person's records*********/

strcpy(add,"C:\\JG MSG\\USERS\\user");
strcat(add,C.id);
strcat(add,"\\subjects.dat");

cout<<"\n\nThe subjects.dat address of the person : \n";
puts(add);

ifstream fin31(add,ios::binary);
subs D;

cout<<"\n\nSubject list.....\n\n\n";
while(fin31.read((char*)&D,sizeof(D)))
{
 puts(D.from);cout<<"\t";puts(D.subject);cout<<"\t";cout<<D.cal.d<<"/"<<D.cal.m<<"/"<<D.cal.y<<"\n";
}
fin31.close();
}

