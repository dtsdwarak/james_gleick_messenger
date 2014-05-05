# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>
char j[80],q[]={'a'};
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





void res(int a)
{

 /*
 int k=0;
 char status[10],sles[80];
 if (a!=1)
 {
  strcpy(sles,"Server Link Establishment Successful");
  strcpy(status,"Successful");
 }
 else
 {
  strcpy(sles,"Server Link Establishment Failure");
  strcpy(status,"Failure");
 }
 for(int i=0;i<=11;i+=1)
 {
  clrscr();
  gotoxy(5,k);
  cout<<"\t\t\tAccessing James Gleick Servers";
  delay(50);
  k+=1;
 }
 int cnt=0;
 do
  {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tAccessing James Gleick Servers\n\n";
   cout<<setw(i)<<"===";
   delay(40);
   if (i<=77)
   i+=4;
   else
   i=0;
   cnt+=1;
  }
  while(cnt<=150);
 cnt=0;
 do
 {
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t  Server Link Establishment "<<status<<" ! ";
  delay(500);
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t  Server Link Establishment "<<status;
  delay(500);
  cnt+=1;
 }
 while(cnt<5);
 int slesl=strlen(sles);
 for(i=0;i<slesl;i+=1)
 {
  clrscr();
  gotoxy(5,13);
  for(int j=i;j<slesl;j+=1)
  cout<<sles[j];
  delay(50);
 } */
 cout<<a;

}

void enpass(char upass[])
{ char t;
  cout<<"\nEnter your 5 digit password : (sixth to continue) ";
  for(int i=0;i<6;)
  {
   t=getch();
   if(isalnum (t))
   {
   upass[i]=t;
   i+=1;cout<<"*";
   }
   else if(t=='\b')
   {
   cout<<"\b \b";
   upass[i-1]=getch();
   cout<<"*";
   }


  }
  if(i==5&&t=='\b')
  {cout<<"\b \b";
   upass[4]=getch();}
   cout<<"\b \b";
   upass[5]='\0';

 }



void mailcheck()
{

 ifstream fin(strcat("C:\\JK MSG",j));
 if (!fin)
 {
  res(1);
 }
}





















void intro()
{
 char s[]={"Successful"};

 int cnt=0,i=0;

 do
  {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tAccessing James Gleick Servers\n\n";
   cout<<setw(i)<<"===";
   delay(40);
  if (i<=77)
  i+=4;
  else
  i=0;
  cnt+=1;
 }
 while(cnt<=150);
 cnt=0;
 do
 {
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t  Server Link Establishment "<<s<<" ! ";
  delay(500);
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t  Server Link Establishment "<<s;
  delay(500);
  cnt+=1;
 }
 while(cnt<5);
 char sles[]="Server Link Establishment Successful";
 int slesl=strlen(sles);
 for(i=0;i<slesl;i+=1)
 {
  clrscr();
  gotoxy(5,13);
  for(int j=i;j<slesl;j+=1)
  cout<<sles[j];
  delay(50);
 }
 clrscr();

 info X;
 cout<<"\n\t\t\tJames Gleick's Messenger";
 cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
 cout<<"\n\n\n\t\t\t\tSign Up";
 cout<<"\n\nEnter your first name : ";
 gets(X.fname);
 cout<<"\nEnter your second name  : ";
 gets(X.sname);
 cout<<"\nEnter your preferred user name :  ";
 gets(X.username);

 ofstream fout22("C:\\JG MSG\\login\\list.use",ios::binary|ios::app);
 {
   use A;
   fout22.seekp(0,ios::end);
   strcpy(A.name,X.username);
   fout22.write((char*)&A,sizeof(A));
  }
 fout22.close();
 char tempo[20];
 strcpy(tempo,X.username);
 strcat(tempo,"@jgs.com");
 strcpy(X.mname,tempo);
 cnt=0;

 enpass(X.pass1);
 cout<<"\n\nPlease Reconfirm your passowrd";
 cout<<"\n~~~~~~ ~~~~~~~~~ ~~~~ ~~~~~~~~";
 enpass(X.pass2);




char z[80],file[80];

  char nm[2],temp[1];
  logid B;
  ifstream fin15("C:\\JG MSG\\login\\signs.dat",ios::binary);
  fin15.read((char*)&B,ios::binary);
  nm[0]=B.a;
  nm[1]='\0';
  fin15.close();
  B.a+=1;
  ofstream fout16("C:\\JG MSG\\login\\signs.dat",ios::binary);
  fout16.write((char*)&B,ios::binary);
  fout16.close();
  strcpy(X.id,nm);

 strcpy(z,X.username);
/********************************************/
 strcat(z,".jgs");
/***all the user info files are being saved under name.jgs**/

 strcpy(file,"C:\\JG MSG\\login\\");

 strcat(file,z);
 ofstream fout7(file,ios::binary);
 fout7.write((char*)&X,sizeof(X));



 fout7.close();
 cout<<"\n\nAccount Created Successfully !";
 cout<<"\n\nPress Any Key To Proceed To view details";
 getch();

 clrscr();
 cout<<"\n\n\n\t\t\t\tAccount Details";
 cout<<"\n\n 1. Your USER Name : ";puts(X.username);
 cout<<"\n 2. Your USER Login ID : "; puts(nm);
 cout<<"\n 3. Stage 1 Password : "; puts(X.pass1);
 cout<<"\n 4. Stage 2 Password : "; puts(X.pass2);
 cout<<"\n\n\n Proceed to Login !";
 getch();


}














void main()
{
 start:clrscr();
 int ch;
 char uname[80],upass[6],id[80],nm[2];

 cout<<"\n\t\t\tJames Gleick's Messenger";
 cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
 cout<<"\n 1. Sign In\n 2. Weather ";
 cout<<"\n 3. Don't have an account...? Sign up";
 cout<<"\n\n Enter choice : ";
 /************ CHOICE CHECK**********************/
 {
  cin>>ch;
  if (ch<1||ch>3)
  {
   cout<<"\n\nWrong option";
   delay(3000);
   goto start;
  }
 }
 //int k=0;
/*************************CHECKMATE!!**********/
 switch(ch)
 { sign:
  case 1:clrscr();
 cout<<"\n\t\t\tJames Gleick's Messenger";
 cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
 cout<<"\n\nEnter your username (Max : 8) : "; gets(uname);
 enpass(upass);

 strcpy(id,uname);
 strcat(id,".jgs");
 for(int i=0;id[i]!='\0';i+=1)
 id[i]=toupper(id[i]);


 /**********************vetti bandha**********************/


 /*
 for(i=0;i<=11;i+=1)
 {
  clrscr();
  gotoxy(5,k);
  cout<<"\t\t\t\tSigning In";
  delay(50);
  k+=1;
 }
 int cnt=0;
 do
  {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tSigning In\n\n";
   cout<<setw(i)<<"===";
   delay(40);
   if (i<=77)
   i+=4;
   else
   i=0;
   cnt+=1;
  }
  while(cnt<=150);


  */

  /*******************vetti bandha ends*********************/

 /**********************USER ACCOUNT CHECK*********/

 ifstream fin(strcat("C:\\JG MSG\\login\\",id),ios::binary);
 if (!fin)
 {
  res(1);
 }
 else
 {
  res(9);
  uname[0]=toupper(uname[0]);


   /**********Options****************/
  clrscr();
 info X;
 fin.read((char*)&X,sizeof(X));
 fin.close();
 cout<<"\n\t\t\tJames Gleick's Messenger";
 cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~\n\n";
 char name[4][20]={{"Check mail"},{"Compose"},{"Check online status"},{"Sign Out"}};
 char choice='a';
 int top=0;
 do
 {
 int w=5;
 clrscr();
 int length;
 int top1=0;
 for(int i =0;i<4;i+=1)
 {
 length=2;
 name[i][0]=toupper(name[i][0]);
 length+=strlen(name[i]);
 length=80-length;
 length/=2;
 gotoxy(length,w+top1);
 puts(name[i]);
 top1+=1;
 }

 if ((choice=='w'||choice=='W')&&top>0)
 top-=1;
 else if((choice=='s'||choice=='S')&&top<3)
 top+=1;
 else if(choice==32)
 {
  ch=top+1;choice=27;continue;
 }

 for(i=2;i<length-4;i+=1)
 {
  gotoxy(76-i,w+top);
  cout<<"=";
  delay(25);
  gotoxy(i,w+top);
  cout<<"=";
  delay(25);
 }
 cout<<"\n\n\n\nEnter W and S to scroll up and down and Space to enter and Esc to quit";
  choice=getch();
 }
 while(choice!=27);



 void composiatte();


  switch(ch)
  {
   case 1: mailcheck();
	   break;
   case 2:composiatte();
	  break;
   case 3:cout<<"\n friens sleeping  ";
	 break;
   case 4:cout<<"\nsign out not ready";
	  break;
  }
 }//End of else condition
 break;


   case 2:cout<<"WEATHER DESIGNER UNDER CONSTRUCTION ";
	  break;

   case 3:clrscr();
	  intro();
	  goto sign;

}
getch();
}


void composiatte()
{
 clrscr();
int ch,l;
char name[12],sub[80],usercheck[10];
comp:cout<<"\t\t\t WELCOME TO JGMSG'S MESSAGE COMPOSIATTE......";

cout<<"\n\n Enter the length of your message ";
cout<<"\n\n 1. Sweet And Crisp (5 Lines)\n 2. Reaching the Mind (10 Lines) \n 3. Blow your own trumpet!!! (15 Lines) ";
cout<<"\n\nEnter your choice : ";
cin>>ch;
(ch==1)?l=5:((ch==2)?l=10:l=20);
cout<<"\n PRESS ANY KEY FOR US 2 ESCORT U TO THE REQUIRED PAGE....";
getch();
clrscr();
cout<<"\n\n\n\t\t\tJG MSG OUTLOOK EXPRESS ";
int flag=0;

cout<<"\n\n\n\n To : ";
gets(name);
use A;
ifstream fin11("C:\\JG MSG\\login\\list.use",ios::binary);
while(fin11.read((char*)&A,sizeof(A)))
{
 //cout<<"\n\nthe list contains..."<<A.name<<"\n";
 if (strcmpi(name,A.name)==0)
 {
 flag=1;
 break;
 }
}
fin11.close();
if (!flag)
{
 cout<<"\n\t YOUR FRIEND IS NOT A MEMBER OF JG MSG NETWORK ";
 cout<<"\n\nEnter a valid id";
 delay(3000);
 goto comp;
}
else
{
 cout<<"\n\nMember found!!";
}
cout<<"\n\n\t\t Sub : ";
gets(sub);
info Y;


char f[]={"C:\\JG MSG\\login\\"};
strcat(name,".jgs");
strcat(f,name);cout<<"\n adress ";puts(f);
ifstream fin10(f,ios::binary);
fin10.read((char*)&Y,sizeof(Y));
fin10.close();
cout<<"login id : "<<Y.id;


char file1[]={"C:\\JG MSG\\USERS\\user"};
strcat(file1,Y.id);
cout<<"\n\nYour user id : "<<Y.id;
strcat(file1,"\\inbox\\");
strcat(file1,sub);
strcat(file1,".txt");

cout<<"\n\n your file destination address : ";puts(file1);
ofstream wout(file1);
cout<<"\n\n Enter the content : \n\n";

char topic[80];
do
{
 gets(topic);
 wout.write(topic,strlen(topic)).put('\n');
}
while(--l);
cout<<"\n\n Message Sent successfully";
wout.close();
}


