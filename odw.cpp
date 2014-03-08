#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int n,m,wynik;
int odw[100000],kontenery[100000],mx;
priority_queue <int> kon;

void wczytaj()
{
   scanf("%d%d",&n,&m);
   for(int i=0;i<n;i++)
   {
      scanf("%d",&kontenery[i]);
      mx=max(mx,kontenery[i]);
   }
   for(int i=0;i<m;i++)
      scanf("%d",&odw[i]);
}

bool da_sie(int x)
{
   priority_queue<int,vector<int> > kon;
   for(int i=0;i<n;i++)
   kon.push(kontenery[i]);
   
   int v;
   for(int i=x;i>=0;i--)
   {
      if(!kon.empty())
      {
         //cout<<"&"<<odw[i]<<"&"<<i<<endl;
         v=kon.top();
         kon.pop();
         //cout<<"*"<<v<<"*"<<x<<endl;
      }
      else
         return false;
      if(v<odw[i])
         return false;
      else
      {
          //cout<<"#"<<v-odw[i]<<endl;
         kon.push(v-odw[i]);
      }
   }
   return true;
}

int licz()
{   
   int a=0,b=m;
   while(a+1<b)
      if(da_sie((a+b)/2))
         a=(a+b)/2;
      else
         b=(a+b)/2;
   return a+1;
}

void wypisz()
{
   printf("%d\n",licz());
}

int main()
{
wczytaj();
sort(odw,odw+m);
if(mx<odw[0])
printf("0\n");
else
wypisz();
return 0;
}
