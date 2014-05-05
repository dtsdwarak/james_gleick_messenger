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



struct use
{
 char name[8];
};


void blinker(char name[], int a, int b)
{
 int count=0;
 do
 {
  clrscr();
  gotoxy(a,b);
  cout<<name<<" !";
  delay (950);
  clrscr();
  gotoxy(a,b);
  cout<<name;
  count+=1;
  delay (950);
 }
 while (count<=1);
}
void slowprin()
{
  int len;
  ifstream fin45("C:\\JG MSG\\settings\\conintro.txt");
  char intro[80];
  cout<<"\n\n";
  while(fin45.getline(intro,80))
  {
   len=strlen(intro);
   for(int i=0;i<len;i+=1)
   {
    cout<<intro[i];
    delay(10);
   }
   cout<<"\n";
  }
  fin45.close();
}


void startup(char name[])
{
 char ch=97; //name[]="PG Database Securities";
 int l=(80-(strlen(name)))/2;
 for(int i=0;i<l;i+=1)
 {
  clrscr();
  gotoxy(i,3);
  puts(name);
  delay(50);
 }

 clrscr();
 gotoxy(l,3);
 for(i=0;i<strlen(name);i+=1)
 {
  for(int j=0;j<27;j+=1)
  {
   cout<<ch++<<"\b";
   delay(5);
  }
  ch=97;
  cout<<name[i];
 }
 clrscr();
 blinker(name,l,3);
 cout<<"\n";
}

void contacts()
{

 int choice;

 char name[]="Welcome to Contact Manager";
 startup(name);
 //char intro[]="This is a unique feature of the James Gleick Messenger. This enables you to add contacts and make frineds within James Gleick Network. Before you get on with some 'Real Networking' this is very essential. It is highly recommended that you perform this, although it is not compulsory.";
 slowprin();

 /***********source program slide.cpp in my programs folder*/

 int i,j;
 char p[]=" 1. Yes. Ok. Proceed";
 char s[]=" 2. No. I'll Do it later.";
 for(i=0,j=62;i<=26;i+=1,j-=1)
 {
  clrscr();
  {
   int len;
   //char ch=97; //name[]="PG Database Securities";
   int l=(80-(strlen(name)))/2;
   gotoxy(l,3);
   cout<<name<<"\n\n\n";
   ifstream fin45("C:\\JG MSG\\settings\\conintro.txt");
   char intro[80];

   while(fin45.getline(intro,80))
   {
    len=strlen(intro);
    for(int i=0;i<len;i+=1)
    {
     cout<<intro[i];
    }
    cout<<"\n";
   }
    fin45.close();
  }
  gotoxy(i,12);
  puts(p);
  gotoxy(j,14);
  puts(s);
  delay(25);
 }
 delay(2000);




 cout<<"\n\n\n\t\t\t Enter your choice : ";
 cin>>choice;






 for(;i>=0&&j<=62;i-=1,j+=1)
 {
  clrscr();
  {
   int len;
   //char ch=97; //name[]="PG Database Securities";
   int l=(80-(strlen(name)))/2;
   gotoxy(l,3);
   cout<<name<<"\n\n\n";
   ifstream fin45("C:\\JG MSG\\settings\\conintro.txt");
   char intro[80];
   while(fin45.getline(intro,80))
   {
    len=strlen(intro);
    for(int i=0;i<len;i+=1)
    {
     cout<<intro[i];
    }
    cout<<"\n";
   }
    fin45.close();
  }
  gotoxy(i,12);
  puts(p);
  gotoxy(j,14);
  puts(s);
  delay(25);
 }
 clrscr();
 int l=(80-(strlen(name)))/2;
 gotoxy(l,3);
 cout<<name;
 ifstream fin56("C:\\JG MSG\\login\\list.use",ios::binary);
 char username[20][80],names[20][80];
 int k=0;
 {
  use A;
  while(fin56.read((char*)&A,sizeof(A)))
  {
   strcpy(username[k++],A.name);
  }
 }
 fin56.close();
 info X;
 int ch=1;
 int v=0;
 i=0;
 cout<<"\n\nView all available contacts now...";
 cout<<"\n\n\n";
 while(v<k)
 {
 char add[]="C:\\JG MSG\\login\\";
 strcat(add,username[v]);
 strcat(add,".jgs");
 ifstream fin57(add,ios::binary);
 fin57.read((char*)&X,sizeof(X));
 strcpy(names[v++],X.fname);
 cout<<" "<<ch<<". ";
 puts(X.fname);
 ch+=1;
 }



 int selec[20],d=-1;
 char cho;
 cout<<"\n\nChoose your contacts !!! ";
 getch();






 for(i=0;i<k;i+=1)
 {

  clrscr();
  l=(80-(strlen(name)))/2;
  gotoxy(l,3);
  puts(name);
  cout<<"\n\n\n";


  v=0;ch=1;
  while(v<k)
  {
   char add[]="C:\\JG MSG\\login\\";
   strcat(add,username[v]);
   strcat(add,".jgs");
   ifstream fin57(add,ios::binary);
   fin57.read((char*)&X,sizeof(X));
   fin57.close();
   strcpy(names[v++],X.fname);
   cout<<" "<<ch<<". ";
   //int flag=0;


   /*
   for(int m=0;m<=d;m+=1)
   {
    if (strcmpi(X.fname,names[selec[m]])==0)
    {
     //flag=1;
     break;
    }
   }
  */


   /*if (flag)
   {

     char new[20];
     strcpy(new,X.fname);
     int r=0;
     for(;r<strlen(new);r+=1)
     new[r]=toupper(new[r]);
     puts(new);
   }  */
   //else
   puts(X.fname);
   ch+=1;
  }



  /*cout<<"your i value : "<<i;
  getch();  */

  cout<<"\n\n Choose Contact No."<<i+1<<" ? (Y/N) : ";
  cin>>cho;
  if(cho=='y'||cho=='Y')
  {
    d+=1;
   selec[d]=i;
   cout<<"\n\n the selec["<<d<<"] ="<<selec[d];
   cout<<"\n\n the corresponding names are : "<<names[selec[d]];
   getch();
   //cout<<"\n\nthe selec value for "<<d<<" is"<<selec[d]<<"for i = "<<i;
   //getch();
  }




}

 /*char sel[20];
 k=0;
 cout<<"\n\nSelect the names by alphabets seperated by commas : ";
 gets(sel);
 int selec[20];
 for(i=0;i<strlen(sel);i+=1)
 {
  if (sel[i]!=',')
  {
   selec[k++]=selec[i];
  }
 }
 for(i=0;i<=k;i+=1)
 puts(names[selec[i]]);
   */


 cout<<"\n\nnow the d value is : "<<d;
 getch();



 cout<<"\n\nthe selec[d] values are printed below\n\n";
 for(i=0;i<d+1;i+=1)
 {
  cout<<"selec["<<i<<"] = "<<selec[i]<<"\n";
 }
 getch();

 cout<<"\n\nAll the names are : ";
 for(i=0;i<k;i+=1)
 puts(names[i]);

 getch();


 cout<<"\n\nThe selected names are : ";
 for(i=0;i<d+1;i+=1)
 {
  cout<<"\n -- the selec[i] value is "<<selec[i];
  cout<<"\n\nso the names[selec[i]] value is names["<<selec[i]<<"] is : ";
  puts(names[selec[i]]);
  getch();
 }










}


void main()
{
 clrscr();
 contacts();
 getch();
}