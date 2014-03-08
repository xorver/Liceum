#include<iostream>
using namespace std;

main()
{
int a;
cin>>a;

for(int i=1;i<=a;i++)
if(a%i==0)
cout<< i <<" ";
cout<<endl;
system("pause");
return 0;     
}
