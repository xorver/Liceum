//Tomasz Lichoñ 1D

#include<iostream>
using namespace std; 

int sumac(int a)
{
int suma=0;
while(a>0)
{
suma+=a%10;
a/=10;
}
return suma;
}
main()
{
int a,b,ile=0;
cin >> a;
b=a;
while(b>0)
{
b--;
if(sumac(b) + b == a)
ile++;
}
cout << ile <<endl;

system("pause");
return 0;
}
