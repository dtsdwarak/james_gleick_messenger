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

 char uname[20];
 cout<<"\n\nenter your user name : ";
 gets(uname);
 char add[]="C:\\JG MSG\\login\\";

 strcat(add,uname);
 strcat(add,".jgs");

 cout<<"\n\nfile access address of the person : "<<add;

 info X1;
 ifstream fi(add,ios::binary);





int i=0;

while(fc.read((char *)&a,sizeof(a)))

{
//for(int i=0;i<nocont;i++)
cout<<i+1 <<"."<<a.namei[i]<<"\n";
i++;
}
cout<<"\n\nenter the person's serial no : ";
int chi;
cin>>chi;
cout<<"\n THE USER NAME OF THE SELECTED PERSON  IS ";
cout<<a.unamei[chi-1];
}
