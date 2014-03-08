#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

#define MAX 200003
#define REPORT(a) cout<<a<<endl
#define REPTAB(tab,n) cout<<"REPORTING tab:"<<endl; \
                      for(int i=1;i<=n;i++) cout<<tab[i]<<endl; \
                      cout<<"--------------------------------"<<endl

unsigned long long n, ciag[MAX];
unsigned long long h[MAX],hr[MAX],pdpow[100001],pd=200003,podziel=500009;
unsigned long long h2[MAX],hr2[MAX],pdpow2[100001],pd2=204667,podziel2=100000007;

vector<int> rozwiazania;
vector<unsigned long long>pohaszowana[500009];
int czypohaszowana[500009];


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


void wypelnij_powy()
{
   for(int i=0;i<100001;i++)
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
      hr[-(i-n-1)]=(ciag[i]+(unsigned long long)((unsigned long long)hr[-(i-n-1)+1]*(unsigned long long)pd)%podziel)%podziel;
      hr2[-(i-n-1)]=(ciag[i]+((unsigned long long)hr2[-(i-n-1)+1]*(unsigned long long)pd2)%podziel2)%podziel2;
   }
   for(int i=n;i>0;i--)
   {
      h[i]=(ciag[i]+(unsigned long long)((unsigned long long)h[i+1]*(unsigned long long)pd)%podziel)%podziel;
      h2[i]=(ciag[i]+(unsigned long long)((unsigned long long)h2[i+1]*(unsigned long long)pd2)%podziel2)%podziel2;
   }
}

long long haszciagu(int a, int b)
{
return (h[a]-(unsigned long long)((unsigned long long)pdpow[b-a+1]*(unsigned long long)h[b+1])%podziel)%podziel;
}

long long haszciagu_r(int a, int b)
{
a=-(a-n-1);
b=-(b-n-1);
int gg=a;
a=b;
b=gg;
return (hr[a]-(unsigned long long)((unsigned long long)pdpow[b-a+1]*(unsigned long long)hr[b+1])%podziel)%podziel;
}

long long haszciagu2(int a, int b)
{
return (h2[a]-(unsigned long long)((unsigned long long)pdpow2[b-a+1]*(unsigned long long)h2[b+1])%podziel2)%podziel2;
}

long long haszciagu_r2(int a,int b)
{
a=-(a-n-1);
b=-(b-n-1);
int gg=a;
a=b;
b=gg;
return (hr2[a]-(unsigned long long)((unsigned long long)pdpow2[b-a+1]*(unsigned long long)hr2[b+1])%podziel2)%podziel2;
}

//-------------------------------------------------------------------------------

void dodaj_do_pohaszowana(int pocz, int kon)
{
   int odprzodu=haszciagu(pocz,kon);
   int odtylca=haszciagu_r(pocz,kon);
   cout << pocz<<" "<<kon<<" wartosc: "<<odtylca<<endl;
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
wypelnij_powy();
wczytaj();
prefiksy();
jazda_bez_trzymanki();

//cout<<endl;
//REPTAB(pdpow,100);
//cout<<endl;
//REPTAB(hr,n);

//REPORT(haszciagu(16,17));
//REPORT(haszciagu(20,21));
cout<<maxsznurkow<<" "<<maxk<<endl;
for(int i=0;i<rozwiazania.size()-1;i++)
cout<<rozwiazania[i]<<" ";
cout<<rozwiazania[rozwiazania.size()-1]<<endl;

return 0;
}

