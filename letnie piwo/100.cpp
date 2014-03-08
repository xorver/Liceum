#include<iostream>
using namespace std;

bool pierwsze(int x)
{
if(x<2) 
return false;
for(int i=2;i*i<=x;i++)
if(x%i==0)
return false;
return true;
     
}

main()
{
int a;
cin >> a;

for(int i=a;i>0;i--)
if(a%i==0 && pierwsze(i))
{
cout << i <<endl;
break;
}
      
system("pause");
return 0;
}
