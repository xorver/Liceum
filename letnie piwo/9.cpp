//Tomasz Lichoñ 1D

#include<iostream>
#define N 46
using namespace std; 

main() 
{
int a;
cin >> a;
int tab[N]; 
tab[0]=0, tab[1]=1; 
for(int i=0;i<N;i++) 
{
if(i>1)
tab[i]=tab[i-1]+tab[i-2];
   if(tab[i]>a)
   {
   cout << "NIE" <<endl;
   break;
   }
   else if(tab[i]==a)
   {
   cout << "TAK" <<endl;
   break;
   }
}
system("pause");
return 0;
}
