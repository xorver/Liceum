#include<iostream>
#define N 50
using namespace std; 

main() 
{
int a;
cin >> a;
int tab[N]; 
tab[0]=0, tab[1]=1; 
for(int i=0;i<=a+2;i++) 
        {
        if(i>1)
        tab[i]=tab[i-1]+tab[i-2];
        if(tab[i] > a)
           if(tab[i-1] == a)
              if(a==1)
              {
              cout << "0" <<endl;
              break;
              }
              else
              {
              cout << tab[i-2] <<endl;
              break;
              }
           else
           {
           cout << tab[i-1] <<endl;
           break;
           }
        }
        

system("pause");
return 0;
}
