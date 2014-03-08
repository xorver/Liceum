#include<iostream>
using namespace std;

main()
{
int a,b;
cin >> a;

if(a<0)
a=-a;


for(int i=0;a>=i*i*i;i++)
{
   if(i*i*i==a)
   cout << "TAK" << endl;
   b=i;
}
if(b*b*b!=a)
cout << "NIE" <<endl;

system("pause");
return 0;
     
}
