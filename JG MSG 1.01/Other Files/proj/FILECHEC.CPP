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
 clrscr();
 struct info
 {
  char fname[20],mname[20],sname[20],username[25],pass1[7],pass2[7],id[2];
 }X;
 char file[]={"c:\\JG MSG\\login\\"},id[10];
 cout<<"\n\nEnter the id : ";
 gets(id);
 strcat(id,".jgs");
 strcat(file,id);
 ifstream fin(file,ios::binary);
 if(!fin)
 cout<<"\n\nno file present";
 else
 {
 fin.read((char*)&X,sizeof(X));
 cout<<"\n\nLogin id : "<<X.id;
 }
 fin.close();
 getch();
}
