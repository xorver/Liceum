//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;


main()
{
int a,b=0;

cin >> a;

if(a==0)
cout << "1" <<endl;
else
{
for(a;a>=1;a=a/2)
b++;
cout << b <<endl; 
}

system("pause");
return 0;     
}
