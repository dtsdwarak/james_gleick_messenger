# include <iostream.h>
# include <stdio.h>
# include <conio.h>
void main()
{
 char id[20];
 clrscr();
 cout<<"\n\nenter id : ";
 cin.getline(id,8,'@');
 cout<<"\n\nYour id : ";
 puts(id);
 getch();
}
