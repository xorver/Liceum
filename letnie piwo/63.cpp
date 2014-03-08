#include<iostream>
using namespace std;

bool pierwsza(int a)
{
if(a%2==0 && a>2)
return false;
for (int i=3;i*i<=a;i+=2)
    if(a%i==0)
    return false;
return true;
}

main()
{
int a,b,c,d;
 for(int i=100;i<1000;i++)
 if(pierwsza(i))
 {
 a=i%10;
 b=i/10;
 c=b%10;
 d=i/100;
 if(a>=c && c>=d)
   cout << i <<endl;


 }
 system("pause"); 
}
