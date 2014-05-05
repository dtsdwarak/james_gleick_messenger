# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>
void main()
{
 cout<<"\n\nEnter the data : ";
 char t; int c=80;
 ofstream fout("C:\\JG MSG\\settings\\conintro.txt");
 while (ch=='y'||ch=='Y')
 {
  while(c)
  {
   cin>>t;
   fout.write(t,1);
   cout<<"\n your word limit : "<<--c;
