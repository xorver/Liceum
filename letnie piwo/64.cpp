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

int sumacyfr(int x)
{
int suma=0;
    while(x>0)
    {
              
              suma+=x%10;
              x=x/10;
    }
return suma;
}

main()
{
int ile=0,a;
 for(int i=10;ile<20;i++)
 if(pierwsza(i) && pierwsza(sumacyfr(i)))
 {
 cout << i << endl;
 ile++;
 }
 system("pause"); 
}
