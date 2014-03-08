//Tomasz Lichoñ 1D

#include<iostream>
using namespace std; 

const int MAXFIB = 46;
int fib[MAXFIB+1],b[20],c[20] ile=0,l=1;

void tab_fib()
{
  fib[0] = 0;
  fib[1] = 1;
  for(int n=2; n<=MAXFIB; n++)
    fib[n] = fib[n-1] + fib[n-2];
}

void rozklad(int a)
{
for(int i=46;a>0;i--)
{
   if(fib[i]<=a)
   {
      a=a-fib[i];
      b[ile]=fib[i];
      c[ile]=i;
      ile++;
   }
        
}
}
int ilerozkladow(int f,b)
{
for(int i=0;i<ile;i++)
if(fib[c[i]-1]==b[i+1] || fib[c[i]-2]==b[i+1])
continue;
else
{
l=l + 1 +ilerozkladow(fib[c[i-4]]);

 
 
}   
}


main() 
{
int a;
cin >> a;
tab_fib();

rozklad(a);


for(int i=0;i<ile;i++)
if(fib[c[i]-1]==b[i+1] || fib[c[i]-2]==b[i+1])
continue;
else
{
l=l + 1 +ilerozkladow(fib[c[i-4]]);


       

system("pause");
return 0;
}
