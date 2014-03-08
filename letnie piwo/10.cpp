//Tomasz Lichoñ 1D

#include<iostream>
using namespace std; 

main() 
{
int a,b=0,c=1,d,ktory;
cin >> a; 


if(a==1)
cout << 1 <<endl;
else
{
for(int i=0;i<a-1;i++) 
{

if(i%3==0)
d=(b+c)%10;

if(i%3==1)
b=(c+d)%10;

if(i%3==2)
c=(b+d)%10;

ktory = i;
}

if(ktory%3==0)
cout << d <<endl;

if(ktory%3==1)
cout << b <<endl;

if(ktory%3==2)
cout << c <<endl;
}

system("pause");
return 0;
}

