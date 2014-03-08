#include<iostream>
using namespace std;

string zd;
int a,b;

bool czyMa1Slowo(string x)
{
     for(int i=0;i<x.size();i++)
     if(x[i]==' ')
     return false;
     return true;
}     

main()
{
getline(cin,zd);

if(czyMa1Slowo(zd))
cout << zd <<endl;
else
{
for(int i=zd.size()-1;i>=0;i--)
if(zd[i]==' ')
{
   a=i+1;
   b=i+1;
   while(zd[a]!=' ' && a<zd.size())
   {
   cout << zd[a];
   a++;
   }
   cout <<" ";
}
for(int i=0;i<b-1;i++)
cout << zd[i];
cout <<endl;
}
return 0;
}

