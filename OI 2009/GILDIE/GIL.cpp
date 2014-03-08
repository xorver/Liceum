// Tomasz Lichoñ

#include<cstdio>
#include<vector>
#include<queue>
using namespace std;

int m,d,a,b; //mista, drogi,a i b pomocnicze
bool gildia[200001]; //kolor wierzcholka
bool odwiedzone[200001]; //wykreslanie
queue<int> kolejka; //kolejka do bfs
vector<int> s[200001]; //lista sasiedztwa

void czytaj()
{
   scanf("%d",&m);
   scanf("%d",&d);

   for(int i=0;i<d;i++)
   {
      scanf("%d",&a);
      scanf("%d",&b);
      s[a].push_back(b);
      s[b].push_back(a);
   }
}

bool mozna()
{
   for(int i=1;i<=m;i++)
      if(s[i].empty())
         return false;
   return true;
}

void idz()
{
   while(!kolejka.empty())
   {
      a=kolejka.front();
      kolejka.pop();
      for(int i=0;i<s[a].size();i++)
      {
         if(!odwiedzone[s[a][i]])   //s[a][i] - numer i-tego sasiada a-tego miasta
         {
            odwiedzone[s[a][i]]=true;
            gildia[s[a][i]]=!gildia[a];
            kolejka.push(s[a][i]);
         }
      }
   }
}
void rob()
{
   for(int i=1;i<=m;i++)
      if(!odwiedzone[i])
      {
         kolejka.push(i);
         odwiedzone[i]=true;
         idz();
      }
}





int main()
{
czytaj();
if(mozna())
{
   printf("TAK\n");
   rob();
   for(int i=1;i<=m;i++)
      if(gildia[i])
         printf("S\n");
      else
         printf("K\n");
}
else
   printf("NIE\n");

return 0;
}
