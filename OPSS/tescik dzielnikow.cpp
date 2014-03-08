#include<cstdio>

int n,c,m;

//void rozkl(int n)
//{
//  int k=2;
//  j=0;
//  while(n>1)
//    if(n%k==0) 
//    {
//       rozklad[j]=k;
//       j++;
//       n = n/k;
//  
//    }  
//    else k++;
//} 
//
//
//int potega(int f,int g)
//{
//int wynik=1;
//while(g>0)
//{
//   wynik*=f;
//   g--;
//}
//return wynik;
//}
 




unsigned long long suma(int d)
{
unsigned long long gg=1;
int a=1;

gg+=d;
for(int i=2;i*i<d;i++)
if(d%i==0)
   gg+=i+d/i;
return gg;
}




main()
{
scanf("%d %d",&c,&m);

for(int i=0;i<c;i++)
{
   scanf("%d",&n);
   printf("%d \n",suma(n)%m);
}

return 0;
}
