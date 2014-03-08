#include<iostream>
using namespace std;


main()
{
long long a;
int b=0;
cin>> a;

while(a>9)
{
if((a%10)%2==0)
b++;
a=a/10;
}
if(a%2==0)
b++;
cout << b <<endl;

system("pause");
return 0;     
}
