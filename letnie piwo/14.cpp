#include<iostream>
using namespace std;

main()
{
int a,b,c;
cin >> a >> b >> c;
if(a+b>c && a+c>b && b+c>a)
cout << "TAK" <<endl;
else
cout << "NIE" <<endl;

 system("pause");
 return 0;
}
