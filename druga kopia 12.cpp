//Tomasz Lichoñ 1D

#include<iostream>
using namespace std; 

const int MAXFIB = 46;
int fib[MAXFIB+1],b[20],c[20],rozklad_danej[20], ile=0,l=1;

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

//int ilerozkladow(int a,int b)
//{
//int jakduzo=0;
//
//if(fib[a-1]==b || fib[a-2]==b)
//return jakduzo;
//else
//jakduzo=jakduzo + 1 +ilerozkladow(a-1,b);   
//}

void ilerozkladow2()
{
int roznica;
for(int i=0;i<ile;i++)
{
roznica=c[i]-c[i+1];
rozklad_danej[i]-=1;
   for(roznica; roznica>0; roznica-=2)
   if(roznica>=0)
   rozklad_danej[i]+=1;

}   
}



main() 
{
int a,dd=1;
cin >> a;
tab_fib();

rozklad(a);
ilerozkladow2();


//for(int i=0;i<ile;i++)
//dd+=ilerozkladow(c[i],b[i+1]);


//cout << dd <<endl;

for(int i=0;i<ile;i++)
{
cout << rozklad_danej[i] <<endl;
}

       

system("pause");
return 0;
}
