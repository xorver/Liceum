#include<cstdio>
#include<iostream>
using namespace std;

struct puz
{
int a,b,c,d;
bool mazero,dopasowany;
};

puz puzel[1002];
int puzle[502][502],n,m;

void wczytaj()
{
   scanf("%d",&n); //wiersze
   scanf("%d",&m); //kolumny
   for(int i=1;i<=n*m;i++)
   {
      scanf("%d",&puzel[i].a);
      scanf("%d",&puzel[i].b);
      scanf("%d",&puzel[i].c);
      scanf("%d",&puzel[i].d);
      if(puzel[i].a==0 || puzel[i].b==0 || puzel[i].c==0 || puzel[i].d==0)
         puzel[i].mazero=true;
   }
   scanf("%d",&puzle[1][1]);
   scanf("%d",&puzle[2][1]);
}

void wypisz()
{
   for(int y=1;y<=n;y++)
   {
      for(int x=1;x<=m;x++)
         printf("%d ",puzle[x][y]);
      printf("\n");
   }
}

int main()
{
wczytaj();

puzel[0].dopasowany=true;
puzel[puzle[1][1]].dopasowany=true;
puzel[puzle[2][1]].dopasowany=true;

//wypelnianie pierwszego wiersza
for(int i=3;i<=m;i++)
{
   //szukam wsrod dwoch ktore pasuja do elementu z lewej, takiego ktory ma 0 w sasiadach     
   if(puzel[ puzel[ puzle[i-1][1] ].a ].dopasowany==false && puzel[ puzel[ puzle[i-1][1] ].a ].mazero==true)
   {
      puzle[i][1] = puzel[ puzle[i-1][1] ].a;
      puzel[ puzel[ puzle[i-1][1] ].a ].dopasowany=true;
   }
   else if(puzel[ puzel[ puzle[i-1][1] ].b ].dopasowany==false && puzel[ puzel[ puzle[i-1][1] ].b ].mazero==true)
   {
      puzle[i][1] = puzel[ puzle[i-1][1] ].b;
      puzel[ puzel[ puzle[i-1][1] ].b ].dopasowany=true;
   }
   else if(puzel[ puzel[ puzle[i-1][1] ].c ].dopasowany==false && puzel[ puzel[ puzle[i-1][1] ].c ].mazero==true)
   {
      puzle[i][1] = puzel[ puzle[i-1][1] ].c;
      puzel[ puzel[ puzle[i-1][1] ].c ].dopasowany=true;
   }
   else if(puzel[ puzel[ puzle[i-1][1] ].d ].dopasowany==false && puzel[ puzel[ puzle[i-1][1] ].d ].mazero==true)
   {
      puzle[i][1] = puzel[ puzle[i-1][1] ].d;
      puzel[ puzel[ puzle[i-1][1] ].d ].dopasowany=true; 
   }
          
}

//wypelnianie kolejnych wierszy(juz jednoznacznie)
for(int y=2;y<=n;y++)
   for(int x=1;x<=m;x++)
   {  
      if(puzel[ puzel[ puzle[x][y-1] ].a ].dopasowany==false)
      {
         puzle[x][y]=puzel[ puzle[x][y-1] ].a;
         puzel[ puzel[ puzle[x][y-1] ].a ].dopasowany=true;
      }
      else if(puzel[ puzel[ puzle[x][y-1] ].b ].dopasowany==false)
      {
         puzle[x][y]=puzel[ puzle[x][y-1] ].b;
         puzel[ puzel[ puzle[x][y-1] ].b ].dopasowany=true;
      }
      else if(puzel[ puzel[ puzle[x][y-1] ].c ].dopasowany==false)
      {
         puzle[x][y]=puzel[ puzle[x][y-1] ].c;
         puzel[ puzel[ puzle[x][y-1] ].c ].dopasowany=true;
      }
      else if(puzel[ puzel[ puzle[x][y-1] ].d ].dopasowany==false)
      {
         puzle[x][y]=puzel[ puzle[x][y-1] ].d;
         puzel[ puzel[ puzle[x][y-1] ].d ].dopasowany=true;
      }
   }

wypisz();

return 0;
}
