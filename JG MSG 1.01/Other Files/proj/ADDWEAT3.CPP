# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>





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
   cout<<"\n\n Want to add more cities ? (Y/N) : ";
   cin>>ch;
   i+=1;


 }
}



void main()
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
  cout<<"\n\n 1. Add City Info to Database";
  cout<<"\n 2. View Details Of Cities in Database";
  cout<<"\n 3. Exit ";
  cout<<"\n\n Enter your choice : ";
  cin>>ch;
  if (ch==1)
  {
   adddata(a);
   goto y;
  }
  else if (ch==2)
  {
   viewdet(a);
   goto y;
  }
  else
  return;

}