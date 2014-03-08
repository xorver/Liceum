#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
class wierzcholek
{
      public:
      int x,y;
      long long odl;
      void wczytaj(int a,int b)
      {
           x=a;
           y=b;
           odl=ceil(sqrt(x*x+y*y));
      }
};
bool operator>(wierzcholek a,wierzcholek b)
{
     return(a.odl>b.odl);
}
bool operator==(wierzcholek a,wierzcholek b)
{
     return(a.odl==b.odl);
}
bool operator<(wierzcholek a,wierzcholek b)
{
     return((a>b)==0&&(a==b)==0);
}
class wielokat
{
      public:
      int k;
      double ktoryzkolei;
      wierzcholek najdalszy;
      void wczytaj(wierzcholek a,int waga)
      {
           najdalszy=a;
           k=waga;
      }
      void liczktory(int d)
      {
           ktoryzkolei=ceil((double)najdalszy.odl/d);
         // cout<<"naj odl: "<<najdalszy.odl<<" d:"<<d<<" ktory: "<<ktoryzkolei<<endl;
      }
      
};
bool operator>(wielokat a,wielokat b)
{
     return(a.ktoryzkolei>b.ktoryzkolei);
}
bool operator==(wielokat a,wielokat b)
{
     return(a.ktoryzkolei==b.ktoryzkolei);
}
bool operator<(wielokat a,wielokat b)
{
     return(a.ktoryzkolei<b.ktoryzkolei);
}
wielokat tab[100002];
long long t[100002];
long long liczkoszt(int a)
{
     return(a*(a-1)/2);
}
int main()
{
    int n,k;
    scanf("%ld%ld",&n,&k);
    for(int i=0;i<n;i++)
    {
            int m,p;
            scanf("%ld%ld",&m,&p);
            wierzcholek najdalszy,tmp;
            najdalszy.wczytaj(0,0);
            tmp.wczytaj(0,0);
            for(int j=0;j<m;j++)
            {
                    int a,b;
                    scanf("%ld%ld",&a,&b);
                    tmp.wczytaj(a,b);
                    if(tmp>najdalszy)
                       najdalszy=tmp;
            }
            tab[i].wczytaj(najdalszy,p);
            tab[i].liczktory(k);
    }
    sort(tab,tab+n);
    
    long long maxzysk,aktzysk,aktkoszt;
    maxzysk=tab[0].k-liczkoszt(tab[0].ktoryzkolei);
    aktzysk=maxzysk;
    aktkoszt=liczkoszt(tab[0].ktoryzkolei);
    for(int i=1;i<n;i++)
    {
            if(tab[i].ktoryzkolei==tab[i-1].ktoryzkolei)
            {
               aktzysk+=tab[i].k;
            }
            else
            {
                if(aktzysk>maxzysk)
                   maxzysk=aktzysk;
                aktzysk+=aktkoszt;
                aktkoszt=liczkoszt(tab[i].ktoryzkolei);
                aktzysk-=aktkoszt;
                aktzysk+=tab[i].k;
            }
    }
    if(aktzysk>maxzysk)
       maxzysk=aktzysk;
    for(int i=0;i<n;i++)
    {
          //  cout<<i<<" ktory: "<<tab[i].ktoryzkolei<<" najdalszy: "<<tab[i].najdalszy.x<<" "<<tab[i].najdalszy.y<<" k: "<<tab[i].k<<endl;
            }
    printf("%ld\n",maxzysk);
    //system("pause");
    
    
    
    return(0);
}
