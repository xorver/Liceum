//Tomasz Lichoñ 1D

#include<iostream>
using namespace std; 

main()
{
string a,b,c;
int da=0, db=0, dc=0;
cin >> a >> b >> c;

for(int i=0;a[i]!='\0';i++)
da++;

for(int i=0;b[i]!='\0';i++)
db++;

for(int i=0;c[i]!='\0';i++)
dc++;

if(da>=db && da>=dc)
cout << a <<endl;
else 
if(db>=da && db>=dc)
cout << b <<endl;
else
cout << c <<endl;

system("pause");
return 0;
}
