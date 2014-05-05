# include <fstream.h>
# include <iostream.h>
void main()
{
 struct logid
 {
  char a;
 };
 logid X;
 X.a='a';
 ofstream fout("C:\\JG MSG\\login\\signs.dat",ios::binary);
 fout.write((char*)&X,sizeof(X));
 fout.close();
}
