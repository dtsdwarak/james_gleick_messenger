# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>


void final(char A[])
{
 int k=300;
 int l=strlen(A);
 int m=(80-l)/2;
 cout<<m;


 for(int i=0;i<l;i+=1)
 {
  k=150;
  for(int j=40;j>m;j-=1)
  {
   clrscr();
   gotoxy(m,20);
   cout.write(A,i);
   gotoxy(j,20);
   cout<<A[i];
   delay(k);
   k-=10;
  }
 }


}


void main()
{
 clrscr();
 char B[]="Record Updation Processing";
 final(B);
}
