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

int ile;
int odilu;
cin >> odilu;
cin >> ile;
odilu+=1;
 for(int i=odilu;ile>0;i++)
 if(pierwsza(i))
 {
 cout << i <<endl;
 ile--;
 }
 system("pause"); 
}
