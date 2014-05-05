# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>


void lines()
{
 cout<<"\n ";
 for(int a=1;a<78;a+=1)
 {
  cout<<"-";
  delay(50);
 }
}




void main()
{
 clrscr();
 lines();
 getch();
}
