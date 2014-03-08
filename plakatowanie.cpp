#include<cstdio>
#include<stack>
using namespace std;

int n;
int bud[250000],wynik;
stack<int> stos;

void wczytaj()
{
   int tmp;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
      scanf("%d%d",&tmp,&bud[i]);
}

void licz()
{
   for(int akt=0;akt<n;akt++)
   {
      while(!stos.empty() && bud[akt]<stos.top())
         stos.pop();
      if(stos.empty() || bud[akt]>stos.top())
      {
         wynik++;
         stos.push(bud[akt]);
      }
   }
}

int main()
{
wczytaj();
licz();
printf("%d\n",wynik);

return 0;
}