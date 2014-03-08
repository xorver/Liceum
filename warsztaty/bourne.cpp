#include<cstdio>
#include<queue>
#include<set>
using namespace std;

int n,m,z,prz;

struct kraw
{
int gdzie;
int waga;
};

/*
bool operator < (kraw a, kraw b)
{
if(a.waga<b.waga)
return true;
return false;
}
*/
struct pkt
{
bool lemat;
vector<kraw> S;
};

vector<int> odl;
pkt V[100001];

struct fun
{
bool operator () (const int &a,const int &b)
{
if(odl[a]!=odl[b]) return odl[a]<odl[b];
return a<b;
}
};


void dijkstra(int zr)
{
   int a;
   set<int,fun> kopiec;
   odl.clear();
   odl.resize(n,1000000000);
   odl[zr]=0;
   for(int i=1;i<=n;i++)
      kopiec.insert(i);
  // printf("*");
   while(!kopiec.empty())
   {
  // printf("#");
      a=*(kopiec.begin());
      kopiec.erase(kopiec.begin());
    //  printf("%d\n",a);
      for(vector<kraw>::iterator it = V[a].S.begin() ; it!=V[a].S.end() ; it++)
      {   
         if(odl[it->gdzie]>odl[a]+ it->waga)
         {
            int gg=it->gdzie;
      //      printf("- %d %d\n",gg,odl[gg]);
            kopiec.erase(kopiec.find(it->gdzie));
            odl[it->gdzie]=odl[a]+ it->waga;
            kopiec.insert(it->gdzie);
         }
      }
   }
}

/*
set<int,fun> kopiec;
void dijkstra(int s)
{
    int v, u, c;
    odl.clear(); // kasuje wektor
    odl.resize(n, 1000000000); //
 
    odl[s] = 0;
    kopiec.clear();
    for (int i=0; i<n; i++) kopiec.insert(i);
 
    while( !kopiec.empty() )
    {
        u = *(kopiec.begin());
        kopiec.erase(kopiec.begin());
 
        for (int i=0; i<V[u].S.size(); i++)
        {
            v = V[u].S[i].gdzie;
            c = V[u].S[i].waga;
            if (odl[u]+c < odl[v])
            {
                // uaktualniamy wagê wierzcho³ka v
                kopiec.erase(kopiec.find(v));
                odl[v] = odl[u]+c;
                kopiec.insert(v);
            }
        }
    }
 
 
}
*/

void wczytaj()
{
   int a,b,h;
   scanf("%d",&m);
   for(int i=0;i<m;i++)
   {
      scanf("%d%d%d",&a,&b,&h);
      kraw x;
      x.gdzie=b;
      x.waga=h;
      V[a].S.push_back(x);
      x.gdzie=a;
      V[b].S.push_back(x);
   }
   scanf("%d",&b);
   for(int i=0;i<b-1;i++)
   {
      scanf("%d",&a);
      V[a].lemat=true;
   }
      scanf("%d",&prz);
      V[prz].lemat=true;
}


int main()
{
scanf("%d",&z);


for(int i=0;i<z;i++)
{
   scanf("%d",&n);
  /// for(int i=1;i<=n;i++)
   //{
    //  V[i].lemat=false;
     // V[i].S.clear();
   //}
   wczytaj();
   //   printf("%d %d",V[4].S[1].gdzie);
   dijkstra(prz);
   for(int i=1;i<=n;i++)
   printf("%d\n",odl[i]);
}


return 0;
}
