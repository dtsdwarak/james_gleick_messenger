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

int slide()
{
 char s[]="Weather Database Systems";
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

void adddata()
{
  int x;
  x=slide();
  weather X;
  char ch='y';
  int i=0;
  while(ch=='y'||ch=='Y')
  {
   cityadd:clrscr();
   gotoxy(x,3);
   cout<<"Weather Database Systems";
   gotoxy(x,4);
   cout<<"~~~~~~ ~~~~~~~~~ ~~~~~~~";
   cout<<"\n\n City No."<<i+1;
   cout<<"\n\n City : ";
   gets(X.city);
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
    ofstream fout("C:\\JG MSG\\settings\\weather.wea",ios::binary);
    fout.write((char*)&X,sizeof(X));
    fout.close();
   }
   else
   goto cityadd;
   cout<<"\n\n Want to add more cities ? (Y/N) : ";
   cin>>ch;
   i+=1;

 }
 cout<<"\n\nCities added to database.";
}




void main()
{
  adddata();
}