# include <fstream.h>
# include <iostream.h>
void main()
{
 struct logid
 {
  char a;
 };
 logid X;
 //X.a='a';
 ifstream fout("C:\\JG MSG\\login\\signs.dat",ios::binary);
 fout.read((char*)&X,sizeof(X));
 cout<<X.a;
 fout.close();
}
