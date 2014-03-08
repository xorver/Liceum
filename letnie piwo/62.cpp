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
int a,b,c;

 for(int i=10;i<100;i++)
 {
   if(pierwsza(i))
   {
   a=i%10;
   b=i/10;
   c=a*10+b;
   if(pierwsza(c))
   cout << i <<endl;
   }
 }
 system("pause"); 
}
