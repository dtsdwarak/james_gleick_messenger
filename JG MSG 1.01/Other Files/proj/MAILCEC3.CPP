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
void mailcheck(char uname[])
{

 for(int i=0;i<strlen(uname);i+=1)
 uname[i]=tolower(uname[i]);

 cout<<"\n\nyour correct mail id : "<<uname;




 /**********process of making the file address************/




 strcat(add,uname);
 strcat(add,".jgs");

 cout<<"\n\nfile access address of the person : "<<add;

 info X;
 ifstream fi(add,ios::binary);

 //int flag=0;
 if (!fi)
 cout<<"\n\nthe person's file is not available...";
 else
 {
  cout<<"\n\nthe person's personal file is available....";
  fi.read((char*)&X,sizeof(X));
  //flag=1;
 }
 fi.close();



 /*

 if(flag)
 {
  cout<<"\n\nthe person's name is : "; puts(X.fname);
  cout<<"\nthe person's user login id is : "<<X.id;



  /*****************now making the folder address of his files********/


 /*
  strcpy(add,"C:\\JG MSG\\USERS\\user");
  strcat(add,X.id);
  strcat(add,"\\subjects.dat");

  cout<<"\n\nthe persons mail history file ........ \n";
  puts(add);
  subs Y;

  */

  /*******************mail address made now goin to access************/


  /*
  int ch=1;
  ifstream f(add,ios::binary);
  while(f.read((char*)&Y,sizeof(Y)))
  {
   cout<<"\n Mail no. "<<ch++;
   cout<<"\n From : "<<Y.from<<" Subject : "<<Y.subject;
   cout<<"\n Date : "<<Y.cal.d<<"."<<Y.cal.m<<"."<<Y.cal.y;
  }


  cout<<"\n\nreached the end stage...";
  f.close();


 }
 */

}











void call()
{
 clrscr();
 char name[8];
 cout<<"\n\nEnter your username : ";
 gets(name);
 mailcheck(name);
 getch();
 return;
}
void main()
{
  call();
}



