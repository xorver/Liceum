//Tomasz Lichoñ 2d

#include<iostream>
using namespace std;

long long fib[100],n;

void szukaj(long long h,int k)
{
for(int i=0;i<k;i++)
if(h==fib[i])
{
   cout << "TAK"<<endl;
   return;
}

cout << "NIE" <<endl;

}

void wyp()
{
fib[0]=0;
fib[1]=1;
for(int i=2;i<100;i++)
{
   fib[i]=fib[i-1]+fib[i-2];
   if(fib[i]>=n)
   {
      if(fib[i-1]+fib[i-1]==n)
      {
      cout << "TAK"<<endl;
      break;
      }
      szukaj(n-fib[i-1],i);      
      break;
   }
}
}



main()
{
cin >> n;
if(n!=0 && n!=1)
wyp();
else
cout<<"TAK"<<endl;



return 0;
}


