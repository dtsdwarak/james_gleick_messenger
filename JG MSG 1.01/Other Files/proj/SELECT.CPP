# include <iostream.h>
# include <conio.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
void main()
{
 clrscr();
 char name[4][20];
 int w=5,top=0;
 for(int i=0;i<4;i+=1)
 {
  cout<<"\n\nEnter name "<<i+1<<" : ";
  gets(name[i]);
 }
 clrscr();
 int length;
 for(i=0;i<4;i+=1)
 {
 length=2;
 name[i][0]=toupper(name[i][0]);
 length+=strlen(name[i]);
 length=80-length;
 length/=2;
 gotoxy(length,w+top);
 puts(name[i]);
 top+=2;
 }
 top=0;
 for(i=2;i<length-4;i+=1)
 {
  gotoxy(76-i,w);
  cout<<"=";
  delay(25);
  gotoxy(i,w);
  cout<<"=";
  delay(25);
 }

 getch();
}

