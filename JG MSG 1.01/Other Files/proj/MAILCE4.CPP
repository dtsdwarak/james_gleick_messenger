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


char add[]="C:\\JG MSG\\login\\";

void lines()
{
 cout<<"\n ";
 for(int a=1;a<78;a+=1)
 {
  cout<<"-";
  delay(50);
 }
}


void mailcheck(char uname[])
{
 clrscr();
 cout<<"\n\t\t\tJames Gleick's Messenger";
 cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
 cout<<"\t\t\t    Your Mail History";
 cout<<"\n\t\t\t    ~~~~ ~~~~ ~~~~~~~";
 for(int i=0;i<strlen(uname);i+=1)
 uname[i]=tolower(uname[i]);
 //cout<<"\n\nyour correct mail id : "<<uname;

 /**********process of making the file address************/

 strcpy(add,"C:\\JG MSG\\login\\");
 strcat(add,uname);
 strcat(add,".jgs");
 //cout<<"\n\nfile access address of the person : "<<add;
 info X;
 ifstream fi(add,ios::binary);
 int flag=0;
 if (!fi)
 cout<<"\n\nWrong person account...";
 else
 {
  fi.read((char*)&X,sizeof(X));
  flag=1;
 }
 fi.close();
 if(flag)
 {
  //cout<<"\n\nthe person's name is : "; puts(X.fname);
  //cout<<"\nthe person's user login id is : "<<X.id;

  /*****************now making the folder address of his files********/

  strcpy(add,"C:\\JG MSG\\USERS\\user");
  strcat(add,X.id);
  strcat(add,"\\subjects.dat");
  //cout<<"\n\nthe persons mail history file ........ \n";
  //puts(add);
  subs Y;

  /*******************mail address made now goin to access************/

  int ch=1;
  ifstream f(add,ios::binary);
  cout<<"\n\n Mail no."<<setw(10)<<"From"<<setw(20)<<"Subject"<<setw(20)<<"Date";
  while(f.read((char*)&Y,sizeof(Y)))
  {
   lines();
   cout<<"\n "<<setw(4)<<ch++<<setw(15)<<Y.from<<setw(17)<<Y.subject<<setw(19)<<Y.cal.d<<"."<<Y.cal.m<<"."<<Y.cal.y;
  }


  cout<<"\n\nreached the end stage...";
  f.close();
 }
 getch();
}


void main()
{
  char name[8];
 cout<<"\n\nEnter your username : ";
 gets(name);
 mailcheck(name);
  getch();
}



