//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;

main()
{
int a,b,p=2;
cin >> a;
b=a;

while(a>1)
if(a%p==0)
   {
   if(b%(p*p)!=0)
      {
      cout << "TAK" <<endl;
      break;
      }
   a/=p;
   }
else
p++;


if(a==1)
cout << "NIE" <<endl;

system("pause");
return 0;     
}
