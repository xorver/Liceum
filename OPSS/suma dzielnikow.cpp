#include<cstdio>

int n,c,m,rozklad[1000],j;

void rozkl(int n)
{
  int k=2;
  j=0;
  while(n>1)
    if(n%k==0) 
    {
       rozklad[j]=k;
       j++;
       n = n/k;
  
    }  
    else k++;
} 


int potega(int f,int g)
{
int wynik=1;
while(g>0)
{
   wynik*=f;
   g--;
}
return wynik;
}
 


unsigned long long suma(int i)
{
unsigned long long gg=1;
gg=1;
int a;
a=1;

for(int i=0;i<j;i++)
{
   a++;
   if(i+1==j || rozklad[i+1]!=rozklad[i])
   {
   gg=gg*(potega(rozklad[i],a)-1)/(rozklad[i]-1);
   a=1;
   }
}
return gg;
}




main()
{

scanf("%d %d",&c,&m);

for(int i=0;i<c;i++)
{
scanf("%d",&n);

rozkl(n);
printf("%d \n",suma(n));

}


return 0;
}
