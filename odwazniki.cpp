#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,wynik;
int odw[100000],kontenery[100000],minimum;
priority_queue <int> kon;
//priority_queue <long long> kon2;
/*
struct para
{
   long long waga;
   int ile;
   //int wywalone;

   para(long long w)
   {
      waga=w;
      ile=1;
      //wywalone=0;
   }

   void operator ++()
   {
      ile++;
   }
};

vector<para> wagi;
*/
void wczytaj()
{
   scanf("%d%d",&n,&m);
   for(int i=0;i<n;i++)
      scanf("%d",&kontenery[i]);
   for(int i=0;i<m;i++)
      scanf("%d",&odw[i]);
}
/*
void podlicz_wagi()
{
   sort(odw,odw+m);
   wagi.push_back(para(odw[m-1]));
   for(int i=m-2;i>=0;i--)
      if(odw[i]==wagi.back().waga)
         wagi.back().ile++;
      else
         wagi.push_back(para(odw[i]));
}
void licz()
{
   for(vector<para>::iterator it=wagi.begin();it<wagi.end();it++)
   {
      while(kon.top() > it->waga && (it->ile)>0)
      {
         long long v = kon.top() - it->waga;
         kon2.push(it->waga);
         kon.pop();
         kon.push(v);
         it->ile--;
    //     it->wywalone++;
         wynik++; //test
      }
   }
}
void licz2()
{
   while(!kon2.empty() && wagi.back().ile!=0)
   {
      long long v = kon.top();
      kon.pop();
      wynik--;
      for(vector<para>::iterator it=wagi.begin();it<wagi.end() && v>minimum;it++)
      {
         if(it->waga < v && it->ile!=0)
            if(it->ile*it->waga < v)
            {
               v-=it->ile * it->waga;
               for(int i=0;i<(it->ile);i++)
                  kon2.push(it->waga);
               wynik+=it->ile;
               it->ile=0;
            }
            else
            {
               wynik+=v/it->waga;
               for(int i=0;i<v/it->ile;i++)
                  kon2.push(it->waga);
               it->ile-=v/it->ile;
               v=v%it->waga;
            }
      }
   }
}
*/

bool da_sie(int x)
{
   while(!kon.empty())
      kon.pop();
   for(int i=0;i<n;i++)
   kon.push(kontenery[i]);
   
   int v;
   for(int i=x;i>=0;i--)
   {
      if(!kon.empty())
      {
         v=kon.top();
         kon.pop();
      }
      else
         return false;
      if(v<odw[i])
         return false;
      else
         kon.push(v-odw[i]);
   }
   return true;
}

int licz()
{
  //  printf("*");    
   int a=0,b=m-1;
   while(a!=b)
   {
    //         printf("*");
      if(da_sie((a+b)/2))
         b=(a+b)/2;
      else
         a=(a+b)/2;
   }
   return a;
}

void wypisz()
{
   printf("%d\n",licz());
}

int main()
{
wczytaj();
sort(odw,odw+m);
wypisz();
//system("pause");
return 0;
}
