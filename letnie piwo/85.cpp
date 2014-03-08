//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;

main()
{
int a;
cin >> a;

while(a!=1)
if(a%2==0)
a/=2;
else
{
cout << "NIE" <<endl;
break;
}

if(a==1)
cout << "TAK" <<endl;

system("pause");
return 0;     
}
