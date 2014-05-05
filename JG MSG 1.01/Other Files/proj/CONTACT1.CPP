# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>



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


}


void main()
{
 clrscr();
 contacts();
 getch();
}