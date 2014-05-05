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
struct logid
 {
  char a;
 };

struct info
 {
  char fname[20],mname[20],sname[20],username[25],pass1[7],pass2[7];
 };


/*ofstream fout("C:\\JG MSG\\login\\SIGNS.txt");
fout.write(q,strlen(q));
fout.close(); */


void res(int a)
{
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
 }

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
{ cout<<"\n\nENTER YOUR USER NAME : ";
  gets(j);

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
 //char fname[80],sname[80],username[50],mname[80],pass1[20],pass2[20];
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
 char tempo[20];
 strcpy(tempo,X.username);
 strcat(tempo,"@jgs.com");
 strcpy(X.mname,tempo);
 cnt=0;
 /*do
 {
 if(cnt)*/
 enpass(X.pass1);
 cout<<"\n\nPlease Reconfirm your passowrd";
 cout<<"\n~~~~~~ ~~~~~~~~~ ~~~~ ~~~~~~~~";
 enpass(X.pass2);
 //cnt+=1;
 //}
// while(strcmp(pass1,pass2));
/* ofstream fout1("C:\\JG MSG\\login\\nameoffiles.txt");
 char a[] ={"USER A"};
char b[]={"USER B"};
char c[]={"USER C"};
char d[]={"USER D"};
char e[]={"USER E"};
fout1.write(a,6).put('\n');
fout1.write(b,6).put('\n');
fout1.write(c,6).put('\n');
fout1.write(d,6).put('\n');
fout1.write(e,6).put('\n');
fout1.close();*/
  /*char nm[2];temp[1];
  logid B;
  ifstream fin15("C:\\JG MSG\\login\\signs.dat",ios::binary);
  fin15.read((char*)&B,ios::binary);
  nm[0]=B.a;
  nm[1]='\0';
  fin15.close();
  B.a+=1;
  ofstream fout16("C:\\JG MSG\\login\\signs.dat",ios::binary);
  fout16.write((char*)&B,ios::binary);
  fout16.close();*/


/*ifstream fin2("C:\\JG MSG\\login\\SIGNS.txt");
fin2.getline(nm,1);
fin2.close();
strcpy(temp,nm);
for(i=0;temp[i]!='\0';i+=1)
{
  temp[i]=temp[i]+1;
}
ofstream fout3("C:\\JG MSG\\login\\SIGNS.txt");
fout3.write(temp,strlen(temp));
fout3.put('\n');
fout3.close();  */
char z[80],file[80];

 /*ifstream fin("C:\\JG MSG\\login\\nameoffiles.txt");
 fin.getline(z,80);*/

 //nm[0]=toupper(nm[0]);
 strcpy(z,X.username);
/********************************************/
 strcat(z,".jgs");
/***all the user info files are being saved under name.jgs**/

 strcpy(file,"C:\\JG MSG\\login\\");
 //strcat(file,"USER");
 strcat(file,z);
 ofstream fout7(file,ios::binary);
 fout7.write((char*)&X,sizeof(X));

 /*fout7.write(fname,strlen(fname)).put('\n');
 fout7.write(sname,strlen(sname)).put('\n');
 fout7.write(username,strlen(username)).put('\n');
 fout7.write(pass1,strlen(pass1)).put('\n');
 fout7.write(pass2,strlen(pass2)).put('\n');*/

 fout7.close();
 cout<<"\n\nAccount Created Successfully !";
 cout<<"\n\nPress Any Key To Proceed To view details";
 getch();

 clrscr();
 cout<<"\n\n\n\t\t\t\tAccount Details";
 cout<<"\n\n 1. Your USER Name : ";puts(X.username);
 //cout<<"\n 2. User Login ID : "; puts(nm);
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
 //strcpy(id,"USER");
 cout<<"\n\t\t\tJames Gleick's Messenger";
 cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
 cout<<"\n 1. Sign In\n 2. Weather ";
 cout<<"\n 3. Don't have an account...? Sign up";
 cout<<"\n\n Enter choice : ";
 /************ CHOICE CHECK**********************/
 {
  cin>>ch;
  if (ch<1||ch>4)
  {
   cout<<"\n\nWrong option";
   delay(3000);
   goto start;
  }
 }
 int k=0;
/*************************CHECKMATE!!**********/
 switch(ch)
 { sign:
  case 1:clrscr();
 cout<<"\n\t\t\tJames Gleick's Messenger";
 cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
 cout<<"\n\nEnter your username (Max : 8) : "; gets(uname);
 enpass(upass);
 //cout<<"\nEnter your user login id : ";gets(nm);
 /*for(int i=0;i!='\0';i+=1)
 {
  nm[i]=toupper(nm[i]);
 } */
 strcpy(id,uname);
 strcat(id,".jgs");
 for(int i=0;id[i]!='\0';i+=1)
 id[i]=toupper(id[i]);
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
  //int ulen=strlen(uname);
   uname[0]=toupper(uname[0]);


   /**********Options****************/
  clrscr();
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




  /*for(int i=0;i<40-ulen/2;i+=1)
  {
   clrscr();
   cout<<"\n\t\t\tJames Gleick's Messenger";
   cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
   cout<<"\n\n\n\n\n";
   cout<<setw(i)<<"Welcome "<<uname;
   delay(45);
  }
  //************screen after signing in*****************
  for(int j=80;j>=0;j--)
  {
   clrscr();
   cout<<"\n\t\t\tJames Gleick's Messenger";
   cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
   cout<<"\n\n\n\n\n";
   cout<<setw(i)<<"Welcome "<<uname;
   cout<<"\n\n\n";
   cout<<setw(j)<<"1. Check Mail";
   delay(20);
  }

  for(j=80;j>=25;j--)
  {
   clrscr();
   cout<<"\n\t\t\tJames Gleick's Messenger";
   cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
   cout<<"\n\n\n\n\n";
   cout<<setw(i)<<"Welcome "<<uname;
   cout<<"\n\n\n";
   cout<<"1. Check Mail\n\n\n\n\n";
   cout<<setw(j)<<"2. Compose";
   delay(20);
  }
  for(j=80;j>=45 ;j--)
  {
   clrscr();
   cout<<"\n\t\t\tJames Gleick's Messenger";
   cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
   cout<<"\n\n\n\n\n";
   cout<<setw(i)<<"Welcome "<<uname;
   cout<<"\n\n\n";
   cout<<"1. Check Mail\n\n\n\n\n"<<setw(25)<<"2. Compose\n\n\n";
   cout<<setw(j)<<"3. Check Online Status Of Contacts";
   delay(20);
  }
  for(j=80;j>=55 ;j--)
  {
   clrscr();
   cout<<"\n\t\t\tJames Gleick's Messenger";
   cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~";
   cout<<"\n\n\n\n\n";
   cout<<setw(i)<<"Welcome "<<uname;
   cout<<"\n\n\n";
   cout<<"1. Check Mail\n\n\n\n\n"<<setw(25)<<"2. Compose\n\n\n"<<setw(60)<<"3. Check Online Status Of Contacts\n\n\n";
   cout<<setw(j)<<"4. Sign Out";
   delay(20);
  }

  cout<<"\n\nEnter your choice : ";
  cin>>ch;*/

  switch(ch)
  {
   case 1: mailcheck();
	   break;
   case 2:cout<<"\ncompose not ready";
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
clrscr();
}

