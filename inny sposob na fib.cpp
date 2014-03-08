//Tomasz Lichoñ 1D

#include<iostream>
using namespace std; 

main() 
{
int a,b=0,c=1,d=0;
cin >> a; 
for(int i=0;i<a-2;i++) 
{

if(d<=c && d<=b)
{
d=b+c;
cout << d <<endl;
}
else
if(c<=d && c<=b)
{
c=b+d;
cout << c <<endl;
}
else
if(b<=c && b<=d)
{
b=c+d;
cout << b <<endl;
}



}

system("pause");
return 0;
}

