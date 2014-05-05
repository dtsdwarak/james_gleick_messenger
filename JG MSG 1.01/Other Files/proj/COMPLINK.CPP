# include <iostream.h>
# include <conio.h>
# include <fstream.h>
# include <stdio.h>
void main()
{
 char ch[80];
 ifstream fin12("C:\\JG MSG\\login\\list");
 if (!fin12)
 cout<<"\n\nLink not successful";
 else
 {
  cout<<"\n\nLink successful";
  while(fin12.getline(ch,80))
  {
   cout<<"\n\nName : ";puts(ch);
   cout<<"\n";
  }
 }
 fin12.close();
}