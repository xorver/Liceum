#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

struct lin
{
   int koszt;
   bool pion;
};

vector<lin> linie;
int m,n,pionowe,poziome;
long long wynik;

struct srt
{
   bool operator()(lin a,lin b)
   const {
   return a.koszt > b.koszt;
   }
};

void wczytaj()
{
   scanf("%d%d",&m,&n);
   lin tmp;
   for(int i=0;i<m-1;i++)
   {
      scanf("%d",&tmp.koszt);
      tmp.pion=true;
      linie.push_back(tmp);
   }
   for(int i=0;i<n-1;i++)
   {
      scanf("%d",&tmp.koszt);
      tmp.pion=false;
      linie.push_back(tmp);
   }
}
void licz()
{
   for(vector<lin>::iterator it= linie.begin();it<linie.end();it++)
   {
      if(it->pion)
      {
         wynik+=(poziome+1) * (it->koszt);
         pionowe++;
      }
      else
      {
         wynik+=(pionowe+1) * (it->koszt);
         poziome++;
      }
   }
}

int main()
{
wczytaj();
sort(linie.begin(),linie.end(),srt());
licz();
printf("%lld\n",wynik);

/*
for(vector<lin>::iterator it=linie.begin(); it<linie.end(); it++)
   printf("%d - %d\n",it->koszt,it->pion);
*/

return 0;
}