//Tomasz Lichoñ 1D

#include<iostream>
using namespace std; 

const int MAXFIB = 46;
int fib[MAXFIB+1],b[20], ile=0;

void tab_fib()
{
  fib[0] = 0;
  fib[1] = 1;
  for(int n=2; n<=MAXFIB; n++)
    fib[n] = fib[n-1] + fib[n-2];
}

void rozklad(int a)
{
int lol=0;
for(int i=46;a>0;i--)
{
   if(fib[i]==a && lol==0)
   {
   lol++;
   continue;
   }
   if(fib[i]<=a)
   {
      a=a-fib[i];
      b[ile]=fib[i];
      ile++;
   }
        
}
}

main() 
{
int a;
cin >> a;
tab_fib();

rozklad(a);

for(int i=0;i<ile;i++)
cout<< b[i] <<endl;

       

system("pause");
return 0;
}
