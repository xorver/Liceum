//Tomasz Lichoñ 1D

#include<iostream>
#include<string>
using namespace std; 

main()
{
string a;
int dlugosc=0;
getline(cin,a);

while(a[0]==' ')
a.erase(0,1);

while(a[a.size()-1]==' ')
a.erase((a.size()-1),1);

cout << a <<endl;





system("pause");
return 0;
}
