#include<cstdio>
#include<list>
using namespace std;

int n,h,suma=0,wynik=0;

struct zol
{
int wz;
int ram;
};

list<zol> woj;

void wczytaj()
{
scanf("%d%d",&n,&h);
for(int i=0;i<n;i++)
{
   int x,y;
   scanf("%d%d",&x,&y);
   zol tmp;
   tmp.wz=x;
   tmp.ram=y;
   suma+=x;
   woj.push_back(tmp);
}
}

bool operator<(zol a, zol b)
{
   return a.wz<b.wz;
}   
bool operator>(zol a,zol b)
{
   return a.wz>b.wz;
}

int main()
{
wczytaj();
woj.sort();


list<zol>::iterator it=woj.begin();
while(it!=woj.end())
{
   if(suma+(*it).ram>=h)
   {
      woj.erase(it);
      wynik++;
      suma-=(*it).wz;
      if(!woj.empty())
         it = woj.begin();
   }
   else
   it++;   
}

printf("%d",wynik);

return 0;
}
