#include <iostream>
using namespace std;

main()
{
unsigned int a;
cin >> a;
while(a>9)
{
if(a%10==7)
{
cout << "TAK" <<endl;
break;
}
else
a=a/10;
}    

if(a<10 && a!=7)
cout << "NIE" << endl;

system("pause");
return 0;
}

