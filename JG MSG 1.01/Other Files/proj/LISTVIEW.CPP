# include <fstream.h>
# include <stdio.h>
# include <ctype.h>
# include <dos.h>
# include <iostream.h>
# include <conio.h>
# include <iomanip.h>
# include <string.h>
# include <stdlib.h>
struct use
{
 char name[8];
};
void main()
{
 clrscr();
 ifstream fin11("C:\\JG MSG\\login\\list.use",ios::binary);
 use A;
 int c=1;
 while(fin11.read((char*)&A,sizeof(A)))
 {
  cout<<"\n\nname "<<c++<<" : ";puts(A.name);
 }
 fin11.close();
 getch();

}