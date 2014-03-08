#include<cstdio>
#include<algorithm>
#include<iostream>
#include<set>
#include<vector>
#include<utility>
using namespace std;

int n;

struct pkt
{
   int x;
   int y;
   bool wydobycie;
   int nr;
};

bool operator==(pkt a, pkt b)
{
   return (a.x==b.x && a.y==b.y && a.nr==b.nr && a.wydobycie==b.wydobycie);
}

struct poX
{
   bool operator()(pkt a, pkt b)
   const {
      if(a.x<b.x)
         return true;
      else if(a.y>b.y && a.x==b.x)
         return true;
      return false;
   }
};

struct mt
{
   bool operator ()(pkt a,pkt b)
   const {
      if(a.y<b.y)
         return true;
      if(a.y==b.y && a.x>b.x)
         return true;
      return false;
   }
};

pkt punkty[100000];
set < pkt, mt > miotla;
long long wynik;
vector< pair< int, int > > parka;

inline int odl(pkt a, pkt b)
{
   return abs(a.y-b.y)+abs(a.x-b.x);
}

void wczytaj()
{
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
      punkty[i].nr=i+1;
      punkty[i].wydobycie=true;
      scanf("%d%d",&punkty[i].x,&punkty[i].y);
   }
   for(int i=n;i<2*n;i++)
   {
      punkty[i].nr=(i-n)+1;
      punkty[i].wydobycie=false;
      scanf("%d%d",&punkty[i].x,&punkty[i].y);
   }
}

void licz()
{
   for(int i=0;i<2*n;i++)
      if(punkty[i].wydobycie)
         miotla.insert(punkty[i]);
      else
      {
        pkt tmp = *miotla.lower_bound(punkty[i]);
        wynik+=odl(punkty[i],tmp);
        miotla.erase(tmp);
        parka.push_back(make_pair(tmp.nr,punkty[i].nr));
      }
}

void wypisz()
{
   printf("%lld\n",wynik);
   for(vector< pair<int,int> >::iterator it=parka.begin();it<parka.end();it++)
      printf("%d %d\n",it->first,it->second);
}


int main()
{
wczytaj();
sort(punkty,punkty+2*n,poX());
licz();
wypisz();

/*
for(int i=0;i<2*n;i++)
cout<<punkty[i].x<<" "<<punkty[i].y<<endl;
*/
return 0;
}