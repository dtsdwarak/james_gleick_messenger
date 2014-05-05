
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
{char name[20];
cout<<"\n\nenter user name : ";
gets(name);
struct info
 {
  char fname[20],mname[20],sname[20],username[25],pass1[7],pass2[7],id[2];
 }Y;
char file[]={"C:\\JG MSG\\login\\"};
strcat(name,".jgs");
strcat(file,name);cout<<"\n adress ";puts(file);
ifstream fin10(file,ios::binary);
fin10.read((char*)&Y,sizeof(Y));
fin10.close();

cout<<"login id : "<<Y.id;
getch();

}