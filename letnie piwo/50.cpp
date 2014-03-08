//Tomasz Lichoñ 1D

#include<iostream>
using namespace std; 

main()
{
string a,b;
int ile = 0;
getline(cin,a);
getline(cin,b);


for(int i=0;1;i++)
{
if(a[i/2]=='\0' || b[(i/2)]=='\0')
break;

if(i%2==0 && i!=1)
cout << a[i/2];
else
if(i==1)
cout << b[0];
else
cout << b[i/2];
}
cout <<endl;


system("pause");
return 0;
}
