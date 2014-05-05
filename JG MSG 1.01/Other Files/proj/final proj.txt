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

 //***********source program slide.cpp in my programs folder

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
 //char name[]="Welcome to Contact Manager";
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
  char nmew1[80];

  //while(v<k)
  {
   cout<<"\n\nAll the available contacts...";
   for(int x=0;x<k;x+=1)
   {
     int flag=0;
     strcpy(nmew1,names[x]);
     for(int j=0;j<k;j+=1)
     {
      if(strcmpi(names[selec[j]],names[x])==0)
      { flag=1;break; }
     }
     if (flag==1)
     {
      int y=0;
      for(;y<strlen(nmew1);y+=1)
      nmew1[y]=toupper(nmew1[y]);
     }
     cout<<"\n "<<x+1<<". "<<nmew1;
   }
  // v+=1;
  }
  cout<<"\n\n Choose Contact No."<<i+1<<" ? (Y/N) : ";
  cin>>cho;
  if(cho=='y'||cho=='Y')
  {
   d+=1;
   selec[d]=i;
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


 //cout<<"\n\nnow the d value is : "<<d;
 //getch();



// cout<<"\n\nthe selec[d] values are printed below\n\n";
// for(i=0;i<d+1;i+=1)
// {
//  cout<<"selec["<<i<<"] = "<<selec[i]<<"\n";
// }
// getch();

// cout<<"\n\nAll the names are : ";
// for(i=0;i<k;i+=1)
// puts(names[i]);

// getch();




 cout<<"\n\nThe selected names are : ";
 for( i=0;i<d+1;i+=1)
 {
  cout<<"\n\n\n The selec[i] value is "<<selec[i];
  cout<<"\nSo the names[selec[i]] value is names["<<selec[i]<<"] is : ";
  puts(names[selec[i]]);
  cout<<"Their respective mail id is : ";puts(username[selec[i]]);
}

 getch();
 cout<<" \n\nNow moving forward to creating your contacts file...";
 }







void slowprin(char intro[])
{
 //char intro[]="Now before we go into Password Generation process for Dwarak's Application Suite you need to have a unique access key. This is, to avoid intruders from accessing secure application and database systems.";
 int len=strlen(intro);
 //k=0;int s=5;
 for(int i=0;i<len;i+=1)
 {
  cout<<intro[i];
  delay(10);
  if (i==74||i==146)
  cout<<"\n ";
 }
}


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
 }
 */
 cout<<a;

}

void enpass(char upass[],int n=5)
{ char t;
  cout<<"\nEnter your 5 digit password :  ";
  for(int i=0;i<n;i+=1)
  {
   t=getch();
   upass[i]=t;
   cout<<"*";
  }
  upass[n]='\0';

 }



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

 int flag=0;
 if (!fi)
 cout<<"\n\nthe person's file is not available...";
 else
 {
  cout<<"\n\nthe person's personal file is available....";
  fi.read((char*)&X,sizeof(X));
  flag=1;
 }
 fi.close();





 if(flag)
 {
  cout<<"\n\nthe person's name is : "; puts(X.fname);
  cout<<"\nthe person's user login id is : "<<X.id;



  /*****************now making the folder address of his files********/



  strcpy(add,"C:\\JG MSG\\USERS\\user");
  strcat(add,X.id);
  strcat(add,"\\subjects.dat");

  cout<<"\n\nthe persons mail history file ........ \n";
  puts(add);
  subs Y;



  /*******************mail address made now goin to access************/



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

 getch();

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


 X.fname[0]=toupper(X.fname[0]); //changing startin letter to caps
 cout<<"\nEnter your second name  : ";

 gets(X.sname);
 X.sname[0]=toupper(X.sname[0]);//again changing 1st letter 2 caps

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
 cout<<"\n\nPress Any Key To Proceed To view contact manager ";
 getch();
 contacts();

 clrscr();
 cout<<"\n\n\n\t\t\t\tAccount Details";
 cout<<"\n\n 1. Your USER Name : ";puts(X.username);
 cout<<"\n 2. Your USER Login ID : "; puts(nm);
 cout<<"\n 3. Stage 1 Password : "; puts(X.pass1);
 cout<<"\n 4. Stage 2 Password : "; puts(X.pass2);
 cout<<"\n  Now press a key to view your contact list ";
 getch();


 cout<<"\n\n\n Proceed to Login !";
 getch();


}


/****************************Weather Functions***************************/
struct weather
{
 int wind,relhum,vis,temp;
 char city[20];
};

void final(char A[])
{
 int k=50;
 int l=strlen(A);
 int m=(80-l)/2;
 cout<<m;
 for(int i=0;i<l;i+=1)
 {
  k=50;
  for(int j=40;j>m;j-=1)
  {
   clrscr();
   gotoxy(m,10);
   cout.write(A,i);
   gotoxy(j,10);
   cout<<A[i];
   delay(k);
   k-=2;
  }
 }
}

void viewdet(int x)
{
 menu:clrscr();
 gotoxy(x,3);
 cout<<"Weather Database Systems";
 gotoxy(x,4);
 cout<<"~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
 weather A;
 int b=0,ch=1;
 cout<<"\n\n List of available cities : \n\n";
 ifstream fin1("C:\\JG MSG\\settings\\weather.wea",ios::binary);
 if(!fin1)
 {
  cout<<"\n\n Database Empty ...!";
  cout<<"\n\n Press any key ...  !";
  getch();
  return;
 }
 else
 {
  while(fin1.read((char*)&A,sizeof(A)))
  {
   b+=1;
   cout<<"\n "<<ch<<"."<<A.city;
   ch+=1;
  }
  fin1.close();
  cout<<"\n\nEnter the serial no. of the city or 0 to exit : ";
  cin>>ch;
  if (!ch)
  return;
  else
  {
   b=0;
   ifstream fin1("C:\\JG MSG\\settings\\weather.wea",ios::binary);
   while(b<ch&&fin1.read((char*)&A,sizeof(A)))
   b+=1;
   clrscr();
   gotoxy(x,3);
   cout<<"Weather Database Systems";
   gotoxy(x,4);
   cout<<"~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
   cout<<"\n\n\t\t\t\tCity Details";
   cout<<"\n\n City : ";
   puts(A.city);
   cout<<"\n Relative Humidity : "<<A.relhum;
   cout<<"\n Temperature (0C) : "<<A.temp;
   cout<<"\n Wind Speed (in kM/h) : "<<A.wind;
   cout<<"\n Visibility (in metres) : "<<A.vis;
   cout<<"\n\nPress any key ! ";
   getch();
   goto menu;
  }
 }
}



int slide(char s[])
{

 for(int i=56;i>=23;i-=6)
 {
  clrscr();
  cout<<"\n\n\t\t\t";
  puts(s);
  gotoxy(i,4);
  cout<<"////// ////////// /////////";
  delay(120);
 }
 clrscr();
 cout<<"\n\n\t\t\t";
 puts(s);
 gotoxy(53,4);
 gotoxy(i+5,4);
 cout<<"\\\\\\\\\\\\ \\\\\\\\\\\\\\\\\\\\ \\\\\\\\\\\\";
 delay(500);
 clrscr();
 cout<<"\n\n\t\t\t";
 puts(s);
 gotoxy(i+5,4);
 cout<<"====== ========== ======";
 delay(200);
 return(i+5);
}




void adddata(int x)
{

  weather X,Y;
  char ch='y';
  int i=0;



  while(ch=='y'||ch=='Y')
  {
   cityadd:clrscr();
   gotoxy(x,3);
   cout<<"Weather Database Systems";
   gotoxy(x,4);
   cout<<"~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
   cout<<"\n\n City No."<<i+1;
   cout<<"\n\n City : ";
   gets(X.city);

   fstream f("C:\\JG MSG\\settings\\weather.wea",ios::binary|ios::in|ios::out);
   int flag=0,s=0;
   while (f.read((char*)&Y,sizeof(Y)))
   {
    s+=1;
    if (strcmpi(Y.city,X.city)==0)
    {
     up:
    {
     clrscr();
     gotoxy(x,3);
     cout<<"Weather Database Systems";
     gotoxy(x,4);
     cout<<"~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
    }

     cout<<"\n\n "<<Y.city<<" already present in database. Update record.";
     cout<<"\n\n City : ";
     puts(X.city);
     cout<<"\n Relative Humidity : ";
     cin>>X.relhum;
     cout<<"\n Temperature (0C) : ";
     cin>>X.temp;
     cout<<"\n Wind Speed (in kM/h) : ";
     cin>>X.wind;
     cout<<"\n Visibility (in metres) : ";
     cin>>X.vis;
     cout<<"\n\n Confirm Data Entry (Y/N) : ";
     cin>>ch;
     if (ch=='n'||ch=='N')
     {
      flag=1;
      goto up;
     }
     else
     {
      f.seekg((s-1)*sizeof(X),ios::beg);
      f.write((char*)&X,sizeof(X));
      flag=2;
     }
     f.close();
     break;
    }
  }




  if(flag!=2)
  {
   cout<<"\n Relative Humidity : ";
   cin>>X.relhum;
   cout<<"\n Temperature (C) : ";
   cin>>X.temp;
   cout<<"\n Wind Speed (in kM/h) : ";
   cin>>X.wind;
   cout<<"\n Visibility (in metres) : ";
   cin>>X.vis;
   cout<<"\n\n Confirm Data Entry (Y/N) : ";
   cin>>ch;
   if (ch=='y'||ch=='Y')
   {
    ofstream fout("C:\\JG MSG\\settings\\weather.wea",ios::binary|ios::app);
    fout.write((char*)&X,sizeof(X));
    fout.close();
   }
   else
   goto cityadd;

  }
   final("Record Updation Processing");
   clrscr();
   gotoxy(x,3);
   cout<<"Weather Database Systems";
   gotoxy(x,4);
   cout<<"~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
   cout<<"\n\n Want to add more cities ? (Y/N) : ";
   cin>>ch;
   i+=1;


 }
}


 void weatch()
 {
  y:clrscr();
  int a=slide("Weather Database Systems"),ch;
  gotoxy(a,3);
  cout<<"Weather Database Systems";
  gotoxy(a,4);
  cout<<"~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
  cout<<"\n\n\t\t       Weather Data Manager Wizard";
  cout<<"\n\t\t       ~~~~~~~ ~~~~ ~~~~~~~ ~~~~~~";
  cout<<"\n\n Choose your options...";
  //cout<<"\n\n 1. Add City Info to Database";
  cout<<"\n\n 1. View Details Of Cities in Database";
  cout<<"\n 2. Add Cities To Database (Requires Encrypted Secure Login)\n 3. Exit ";
  cout<<"\n\n Enter your choice : ";
  cin>>ch;
  /*if (ch==1)
  {
   adddata(a);
   goto y;
  } */
  if (ch==1)
  {
   viewdet(a);
   goto y;
  }
  else if(ch==2)
  {
   int f=0;
   char passi[100],status[100];
   enpass(passi,6);
   clrscr();
   gotoxy(a,3);
   cout<<"Weather Database Systems";
   gotoxy(a,4);
   cout<<"~~~~~~ ~~~~~~~~~ ~~~~~~~\n";
   if (strcmpi(passi,"dwarak")==0)
   {
    strcpy(status,"Successful");
    f=1;
   }
   else
   strcpy(status,"Failure");
   int cnt=0;
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
   if (f)
   {
    adddata(a);
    goto y;
   }
   else
   goto y;

  }


  else
  return;
 }

/****************End of weather Functions**********************/











void main()
{
 start:clrscr();
 int ch;
 char uname[80],upass[6],id[80],nm[2];

 cout<<"\n\t\t\tJames Gleick's Messenger";
 cout<<"\n\t\t\t~~~~~ ~~~~~~~~ ~~~~~~~~~";
 cout<<"\n\n 1. Sign In\n 2. Weather ";
 cout<<"\n 3. Don't have an account...? Sign up\n 4. Exit";
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



 void composiatte(char[]);


  switch(ch)
  {
   case 1: mailcheck(uname);
	   break;
   case 2:composiatte(uname);
	  break;
   case 3:cout<<"\n friens sleeping  ";
	 break;
   case 4:/*char xy;
          cout<<"\n\nDo you really want to sign out...? (Y/N) : ";
          cin>>xy;
          if(xy=='y'||ch=='y')
          goto men;  */
          cout<<"\nsign out not ready....";
          break;


  }
 }//End of else condition
 break;
 //goto start;


   case 2: weatch();

	  break;

   case 3:clrscr();
	  intro();
	  goto sign;

   case 4:exit(0);

}
 goto start;
}


void composiatte(char uname[])
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
 cout<<"\n\nthe list contains..."<<A.name<<"\n";
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

/*****************adding to his unread mail***************/

char add[]="C:\\JG MSG\\login\\";
strcat(add,uname);
strcat(add,".jgs");



/*********reading the user login id from his file***********/
info C;
ifstream fin30(add,ios::binary);
fin30.read((char*)&C,sizeof(C));
fin30.close();

/*************process of accessing the person's records*********/

strcpy(add,"C:\\JG MSG\\USERS\\user");
strcat(add,C.id);
strcat(add,"\\subjects.dat");
ofstream fout30(add,ios::binary|ios::app);
{
 subs D;

 strcpy(D.from,C.fname);
 strcpy(D.subject,sub);
 D.cal.d=0;D.cal.m=0;D.cal.y=0;
 fout30.write((char*)&D,sizeof(D));
}
fout30.close();
}


