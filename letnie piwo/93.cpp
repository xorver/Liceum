//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;


main()
{
int a,b=1;
cin >> a;

while(a>0)
{
b=b*2;
b=b%10;
a--;
}
 
cout << b%10 <<endl;
 
system("pause");
return 0;     
}
