#include<iostream>
using namespace std;

int ilejedynek(int x)
{
int a=0;

while(x>0)
    {
     if(x%10==1)
     a++;
     x=x/10;
    }
return a;
}

main()
{
int b,d=0;      
cin >> b;
for(int i=b;i>0;i--)
d+=ilejedynek(i);
cout << d <<endl;


 system("pause");
 return 0;
}
