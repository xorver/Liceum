#include <iostream>
using namespace std;

string a(int n)
{string s="";
while(n>0)
{char d=n%2 + '0';
s=d+s;
n=n/2;
}
return s;
}

main()
{
 int *tab, N;

cin>>N;
tab=new int [N];
int a,c=0;
string b;
for(int i=0; i<N; i++)
{
cin>>a;
tab[i]=a;
}
for(int i=0; i<N; i++)
{
  b=a[tab[i]];
     for(int i=0;i<a.size();i++) 
  {
    if(b[i]=0)
    c++
    else continue;
    }
    continue;
    }
cout<<c<<endl;    
system("pause");
}
