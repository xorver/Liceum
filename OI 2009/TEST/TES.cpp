#include<cstdio>
#include<vector>
using namespace std;

int m,a,tmp,ktory,x,y,z;
vector<int> ciag[1000001];

void wczytajciag()
{
   scanf("%d", &m);
   for(int i=1;i<=m;i++)
   {
      scanf("%d",&tmp);
      ciag[tmp].push_back(i);
   }
}

void sprawdzpodciag()
{
 for(int j=0;j<a;j++)
   {
      scanf("%d",&tmp);
      if(ciag[tmp].empty() || ciag[tmp][ciag[tmp].size()-1]<=ktory)
      {
         printf("NIE\n");
         for(int k=j+1;k<a;k++)
            scanf("%d",&tmp);
         return;
      }
      else if(ciag[tmp][0]>ktory)
         ktory=ciag[tmp][0];
      else
      {
         x=0;
         y=ciag[tmp].size()-1;
         while(y!=x+1)
         {
            z=(x+y)/2;
            if(ciag[tmp][z]>ktory)
               y=z;
            else
               x=z;
         }
         ktory=ciag[tmp][y];


      }
   }
   printf("TAK\n");
}

int main()
{
wczytajciag();
scanf("%d",&m);

for(int i=0;i<m;i++)
{
   scanf("%d",&a);
   ktory = 0;
   sprawdzpodciag();
}

return 0;
}
