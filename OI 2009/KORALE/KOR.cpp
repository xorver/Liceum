#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

#define MAX 200002

unsigned long long n, ciag[MAX];
unsigned long long h[MAX],hr[MAX],pdpow[200001],pd=200003,podziel=300007;
unsigned long long h2[MAX],hr2[MAX],pdpow2[200001],pd2=204667,podziel2=100000007;

vector<int> rozwiazania;
vector<unsigned long long>pohaszowana[300009];
int czypohaszowana[300009];

int maxk=0;
int aktk=1;
int ilewrzucilem;
int maxsznurkow=0;


unsigned long long power_modulo_fast(unsigned long long a,unsigned long long b,unsigned long long m)
{
   unsigned long long i;
   unsigned long long result = 1;
   unsigned long long x = a%m;

   for (i=1; i<=b; i<<=1)
   {
      x %= m;
      if ((b&i) != 0)
      {
         result=(unsigned long long) result* x;
         result =(unsigned long long)result%m;
      }
      x=(unsigned long long)x*x;
   }

   return result%m;
}

long long mod(long long a,long long podst)
{
   long long x=a%podst;
   if(x<0)
      return podst+ x;
   else
      return x;
}

void wypelnij_powy()
{
   for(int i=0;i<200001;i++)
   {
      pdpow[i]=power_modulo_fast(pd,i,podziel);
      pdpow2[i]=power_modulo_fast(pd2,i,podziel2);
   }
}

void wczytaj()
{
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
      scanf("%d",&ciag[i]);
}
void prefiksy()
{
   for(int i=1;i<=n;i++)
   {
      hr[-(i-n-1)]=(ciag[i]+(hr[-(i-n-1)+1]*pd)%podziel)%podziel;
      hr2[-(i-n-1)]=(ciag[i]+(hr2[-(i-n-1)+1]*pd2)%podziel2)%podziel2;
   }
   for(int i=n;i>0;i--)
   {
      h[i]=(ciag[i]+(h[i+1]*pd)%podziel)%podziel;
      h2[i]=(ciag[i]+(h2[i+1]*pd2)%podziel2)%podziel2;
   }
}

long long haszciagu(int a, int b)
{
   long long x=pdpow[b-a+1];
   x*=h[b+1];
   x=x%podziel;
   x=h[a]-x;
   x=mod(x,podziel);
   return x;
}

long long haszciagu_r(int a, int b)
{
   a=-(a-n-1);
   b=-(b-n-1);
   int gg=a;
   a=b;
   b=gg;
   long long x=pdpow[b-a+1];
   x*=hr[b+1];
   x=x%podziel;
   x=hr[a]-x;
   x=mod(x,podziel);
   return x;
}

long long haszciagu2(int a, int b)
{
   long long x=pdpow2[b-a+1];
   x*=h2[b+1];
   x=x%podziel2;
   x=h2[a]-x;
   x=mod(x,podziel2);
   return x;
}

long long haszciagu_r2(int a,int b)
{
   a=-(a-n-1);
   b=-(b-n-1);
   int gg=a;
   a=b;
   b=gg;
   long long x=pdpow2[b-a+1];
   x*=hr2[b+1];
   x=x%podziel2;
   x=hr2[a]-x;
   x=mod(x,podziel2);
   return x;
}

void dodaj_do_pohaszowana(int pocz, int kon)
{
   int odprzodu=haszciagu(pocz,kon);
   int odtylca=haszciagu_r(pocz,kon);
   int druga;
   if(odprzodu<odtylca)
   {
      druga=haszciagu2(pocz,kon);
      if(czypohaszowana[odprzodu]!=aktk)
      {
         pohaszowana[odprzodu].clear();
         czypohaszowana[odprzodu]=aktk;
      }
      if(pohaszowana[odprzodu].empty())
      {
         pohaszowana[odprzodu].push_back(druga);
         ilewrzucilem++;
      }
      else
      {
         for(int i=0;i<pohaszowana[odprzodu].size();i++)
            if(pohaszowana[odprzodu][i]==druga)
               return;
         pohaszowana[odprzodu].push_back(druga);
         ilewrzucilem++;
      }
   }
   else
   {
       druga=haszciagu_r2(pocz,kon);
       if(czypohaszowana[odtylca]!=aktk)
      {
         pohaszowana[odtylca].clear();
         czypohaszowana[odtylca]=aktk;
      }
      if(pohaszowana[odtylca].empty())
      {
         pohaszowana[odtylca].push_back(druga);
         ilewrzucilem++;
      }
      else
      {
         for(int i=0;i<pohaszowana[odtylca].size();i++)
            if(pohaszowana[odtylca][i]==druga)
               return;
         pohaszowana[odtylca].push_back(druga);
         ilewrzucilem++;
      }
   }

}
void jazda_bez_trzymanki()
{
     int tmp = n - n%aktk;
     while(maxsznurkow<=tmp/aktk)
     {
        ilewrzucilem=0;
        for(int i=1;i<=tmp;i+=aktk)
        {
           dodaj_do_pohaszowana(i,i+aktk-1);
        }

        if(ilewrzucilem>maxsznurkow)
        {
           maxsznurkow=ilewrzucilem;
           maxk=1;
           rozwiazania.clear();
           rozwiazania.push_back(aktk);
        }
        else if(ilewrzucilem==maxsznurkow)
        {
           rozwiazania.push_back(aktk);
           maxk++;
        }
        aktk++;
        tmp = n - n%aktk;
     }
}



int main()
{
ios_base::sync_with_stdio(0);    

wypelnij_powy();
wczytaj();
prefiksy();
jazda_bez_trzymanki();

cout<<maxsznurkow<<" "<<maxk<<"\n";
for(int i=0;i<rozwiazania.size()-1;i++)
cout<<rozwiazania[i]<<" ";
cout<<rozwiazania[rozwiazania.size()-1]<<"\n";;

return 0;
}

