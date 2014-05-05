# include <iostream.h>
# include <conio.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
void main()
{
 clrscr();
 char ch ;
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

 if (choice=='w'&&top>0)
 top-=1;
 else if(choice=='s'&&top<3)
 top+=1;
 else if(choice==32)
 {
  ch=top+1;choice=27;
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
 cout<<"\n\n\n\nEnter w and s to scroll up and down and esc to quit";
  choice=getch();
 }
 while(choice!=27);

}

