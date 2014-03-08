#include<cstdio>
using namespace std;

int n,a,b;
bool wyg[201][201];
bool odw[201];
int poz[201];
int nr=1;

void wczytaj()
{
   scanf("%d",&n);
   for(int i=1;i<=(n*(n-1))/2;i++)
   {
      scanf("%d%d",&a,&b);
      wyg[a][b]=true;      
   }
}

void dfs(int v)
{
   odw[v]=true;   
   for(int i=1;i<=n;i++)
      if(wyg[v][i] && !odw[i])
         dfs(i);
   poz[nr]=v;
   nr++;
}

int main()
{
wczytaj();


for(int i=1;i<=n;i++)
   if(!odw[i])
      dfs(i);

for(int i=n;i>=1;i--)
printf("%d ",poz[i]);
 

return 0;
}
